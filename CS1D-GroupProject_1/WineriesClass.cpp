#include "WineriesHeader.h"

//NOTE: When dealing with the indexes of the wineries, this code is
//the wineries number rather than it's index. (Just for reference if
//anyone writes more code).

//This constructor will create a new Winery for every winery in the input
//file wineries.txt, storing them all in a vector located in the Wineries
//Class
Wineries::Wineries()
{
	int currentWineryNumber = 1;
	ifstream inFile;
	inFile.open("wineries.txt");
	totalWineries = 0;

	//taking in the total wineries from the first line to start the program
	inFile >> totalWineries;
	inFile.ignore(numeric_limits<streamsize>::max(), '\n');

	//Will create a vector of account names and passwords
	while(inFile)
	{
		//creating a new Winery to hold all the information about to be
		//taken in from the input file
		wineryInfo newWinery;

		//getting winery name
		getline(inFile, newWinery.name);

		//setting winery number
		newWinery.ownNumber = currentWineryNumber;

		//looping for every winery in the list based off numTotalWineries
		//the loop will set the winery number as the key corresponding to
		//the distance from itself to THIS winery
		for(int i = 1; i <= totalWineries; i++)
		{
			int    wineryNum; //OTHER winery's number
			float  distFrom;  //Distance from the corresponding winery
							  //number to THIS winery
			//Not being used, only taking the data away to get the distance
			inFile >> wineryNum;
			inFile >> distFrom;
			newWinery.otherWineryDistInfo[i] = distFrom;
			inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		}//end - for

		//getting number of wines offered at THIS winery
		inFile >> newWinery.numWinesOffered;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		for(int i = 0; i < newWinery.numWinesOffered; i++)
		{
			//creating a new bottle to hold vintage and price
			bottleInfo newBottle;
			string wineName; //Offered wine name

			//getting wine name from file
			getline(inFile, wineName);

			//getting wine vintage from file
			inFile >> newBottle.vintage;
			inFile.ignore(numeric_limits<streamsize>::max(), '\n');

			//getting wine price from file
			inFile >> newBottle.price;
			inFile.ignore(numeric_limits<streamsize>::max(), '\n');

			newWinery.offeredWineInfo[wineName] = newBottle;

		}//end - for

		//preforming clean up and preparing for the next winery's data
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		//Pushing the new winery onto the list of wineries
		listOfWineries.push_back(newWinery);

		currentWineryNumber++;
	}//END - while(inFile)

	//closing the input file
	inFile.close();
}//END - Default Constructor

//default destructor
Wineries::~Wineries(){}

////MUTATORS//////////////////////////////////////////////////////////////////

//pushing the passed in winery to the class vector. This method will also
//check to see if the data passed in is valid depending on the number
//of other wineries, num of wines at the winery, etc.
//Will return false if data is not good.
//This method will also assign a winery number to the passed in winery,
//so the admin will not need to know the total number of wineries when
//creating a new one.
bool Wineries::addWinery(ifstream& newWineryText)
{
	//getting all the informaiton from the passed in text file and creating
	//a new winery from it
	wineryInfo newWinery;

	getline(newWineryText, newWinery.name);



	//if the data is good, will push onto the new winery onto the vector
	// and will increment the number of total wineries
	if(newWinery.otherWineryDistInfo.size() == totalWineries + 1 &&
	   newWinery.offeredWineInfo.size() == newWinery.numWinesOffered)
	{
		newWinery.ownNumber = totalWineries + 1;
		listOfWineries.push_back(newWinery);
		totalWineries++;

		//before adding the new winery to the list the program will update
		//the data for every other winery using the new distances passed in



		return true;
	}
	else
	{
		return false;
	}

}//end - addWinery

//This method will update the text file that stores the data.
//making the data persistent between executions
void Wineries::updateList()
{
	stringstream updateStr;

	updateStr << totalWineries << endl;

	//looping for all the wineries in the list
	for(int i = 0; i < totalWineries; i++)
	{
		//adding name of winery
		updateStr << nameOf(i + 1);

		//adding all the distances for that winery
		map<int, float>::iterator
						 it1 = listOfWineries[i].otherWineryDistInfo.begin();

		//adding wine informaiton
		for(;it1 != listOfWineries[i].otherWineryDistInfo.end(); it1++)
		{
			updateStr << endl;
			updateStr << it1->first  << " "
					  << it1->second;
		}//end - for it

		updateStr << endl;

		updateStr << listOfWineries[i].numWinesOffered;

		//adding all the wines offered for that winery
		map<string, bottleInfo>::iterator
							 it2 = listOfWineries[i].offeredWineInfo.begin();

		//adding wine informaiton
		for(;it2 != listOfWineries[i].offeredWineInfo.end(); it2++)
		{
			updateStr << endl;
			updateStr << it2->first          << endl
					  << it2->second.vintage << endl
					  << it2->second.price;
		}//end - for it

		updateStr << endl;

		//appending a newline only if it is not the last winery
		if(i < totalWineries - 1)updateStr << endl;

	}//end - for i

	//eventually will be replaced by outputting to a file
	cout << updateStr.str();

}//end - updateList

////ACCESSORS/////////////////////////////////////////////////////////////////
//returns the distance between the first winery and the second winery
float Wineries::distBetween(int winery1, int winery2) const
{
	float returnDist;
	//if the list is empty OR if number out of bounds, return -1.0
	if(!isEmpty())
	{
		if((winery1 > 0 && winery1 <= totalWineries) &&
		   (winery2 > 0 && winery2 <= totalWineries))
		{
			//Use the value of the winery, NOT the index. This is why the list of
			//wineries index is being subtracted by 1
			returnDist = listOfWineries[winery1 - 1].otherWineryDistInfo.at(winery2);
		}
		else
		{
			returnDist = -1.0;
		}
	}
	{
		returnDist = -1.0;
	}//end - error check

	return returnDist;
}//end - distBetween

//returns the name of the passed in winery number as a string
string Wineries::nameOf(int wineryNumber) const
{
	string returnStr;
	if(!isEmpty())
	{
		if(wineryNumber > 0 && wineryNumber <= totalWineries)
		{
			returnStr = listOfWineries[wineryNumber - 1].name;
		}
		else
		{
			returnStr = "::ERROR:: Invalid Winery\n\n";
		}

	}
	else
	{
		returnStr = "::ERROR:: No Wineries In List\n\n";
	}

	return returnStr;
}//end - nameOf

//returns the total number of wineries
int Wineries::totWineries() const
{
	return totalWineries;
}//end - totWineries

//passes out the information for the winery passed in. passes error if out of
//bounds of if there are no wineries in the list
string Wineries::print( int wineryNumber ) const
{
	stringstream returnStr;

	if(!isEmpty())
	{
		if(wineryNumber > 0 && wineryNumber <= totalWineries)
		{
			returnStr << "WINERY NAME..............."
					  << listOfWineries[wineryNumber].name << "\n"
					  << "WINERY NUM................" << wineryNumber << "\n"
					  << "\n" << "WINES OFFERED............."
					  << listOfWineries[wineryNumber].numWinesOffered
					  << endl << endl;
		}
		else
		{
			returnStr << "::ERROR:: Invalid Winery\n\n";
		}
	}
	else
	{
		returnStr << "::ERROR:: No Wineries In List\n\n";
	}

	return returnStr.str();
}//end - print

//calling print for every winery in the classes list of total wineries.
//the following method will return a string of nicely formatted winery info
string Wineries::printAll() const
{
	string returnStr;
	//running through and calling print for every winery in the vector
	//NOTE: STARTING FROM 1 GOING TO MAX WINERIES
	for(int i = 1; i <= totalWineries; i++)
	{
		returnStr += print(i);
	}

	return returnStr;
}//end - printAll

//return true is there are no wineries in the list
bool Wineries::isEmpty( ) const
{
	return totalWineries == 0;
}//end - isEmpty

void Wineries::findRoute(int startingWinery, int numWineries,
						 queue<int>& wineryRoute)
{
	int exclude[50];

	int val;
	int currWinery;
	float lowDist;
	int runsLeft;
	int runsMade;

	runsMade = 0;


	vector<wineryInfo>::iterator it;

	currWinery = startingWinery;
	runsLeft = numWineries;

	Wineries wineryCopy;
	cout << "TEST" << endl;

	val = currWinery;
	wineryRoute.push(val);
	exclude[runsMade] = val;
	runsMade++;

	for(int index = 0; index < runsMade; index++)
	{
		wineryCopy.listOfWineries[currWinery].otherWineryDistInfo.erase(exclude[index]);
		cout << "Deleted winery " << exclude[index] << " from winery " << currWinery << "'s map." << endl;
	}

	cout << "TESTME" << endl;

	while(runsLeft > 0)
	{
		lowDist = 1000.0;
		cout << "GETHERE" << endl;
		for(int i = 1; i < totalWineries; i++)
		{
			if(wineryCopy.listOfWineries[currWinery - 1].otherWineryDistInfo.at(i) < lowDist)
			{
				lowDist = wineryCopy.listOfWineries[currWinery - 1].otherWineryDistInfo.at(i);
				cout << currWinery << " " << i << endl;		//TEST

				val = i;
			}//end - if
			cout << lowDist << endl;
		}//end - for

		wineryRoute.push(val);
		exclude[runsMade] = val;
		currWinery = val;

		for(int index = 0; index < runsMade + 1; index++)
		{
			wineryCopy.listOfWineries[currWinery].otherWineryDistInfo.erase(exclude[index]);
			cout << "Deleted winery " << exclude[index] << " from winery " << currWinery << "'s map." << endl;
		}
		runsLeft--;
		runsMade++;
	}//end - while
}//end - findRoute
























