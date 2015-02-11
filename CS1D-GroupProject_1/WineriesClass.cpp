#include "WineriesHeader.h"

//NOTE: When dealing with the indexes of the wineries, this code is
//the wineries number rather than it's index. (Just for reference if
//anyone writes more code).

//This constructor will create a new Winery for every winery in the input
//file wineries.txt, storing them all in a vector located in the Wineries
//Class
Wineries::Wineries()
{
	totalWineries = 0;

	ifstream inFile;
	inFile.open("wineries.txt");

	//Will create a vector of account names and passwords
	while(inFile)
	{
		//creating a new Winery to hold all the information about to be
		//taken in from the input file
		wineryInfo newWinery;

		//getting winery name
		getline(inFile, newWinery.name);

		//getting winery number
		inFile >> newWinery.ownNumber;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		//getting total number of wineries
		inFile >> newWinery.numOfWineries;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		//looping for every winery in the list based off numTotalWineries
		//the loop will set the winery number as the key corresponding to
		//the distance from itself to THIS winery
		for(int i = 1; i <= newWinery.numOfWineries; i++)
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

		//incrementing the total number of Wineries
		totalWineries++;
		listOfWineries.push_back(newWinery);

	}//END - while(inFile)

	//closing the input file
	inFile.close();
}//END - Default Constructor

//default destructor
Wineries::~Wineries(){}

////MUTATORS//////////////////////////////////////////////////////////////////

	//eventually we will be able to add wineries

////ACCESSORS/////////////////////////////////////////////////////////////////
//returns the distance between the first winery and the second winery
float Wineries::distBetween(int winery1, int winery2) const
{
	//Use the value of the winery, NOT the index. This is why the list of
	//wineries index is being subtracted by 1
	return listOfWineries[winery1 - 1].otherWineryDistInfo.at(winery2);
}

//returns the name of the passed in winery number as a string
string Wineries::nameOf(int wineryNumber) const
{
	string returnStr;
	if(isEmpty())
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

//prints the information for the winery passed in
string Wineries::print( int wineryNumber ) const
{
	string returnStr;

	if(isEmpty())
	{
		if(wineryNumber > 0 && wineryNumber <= totalWineries)
		{
			float distFromCV = listOfWineries[wineryNumber - 1].otherWineryDistInfo.at(1);

			returnStr = "WINERY NAME....." + listOfWineries[wineryNumber - 1].name + "\n" +
					  + "WINERY NUM......" + (char)wineryNumber + "\n" +
					  + "DIST FROM CV...." + (string)distFromCV + "\n" +
					  + "WINES OFFERED..." + listOfWineries[wineryNumber - 1].numWinesOffered + "\n";
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
}//end - print

//return true is there are no wineries in the list
bool Wineries::isEmpty( ) const
{
	return totalWineries == 0;
}//end - isEmpty





















