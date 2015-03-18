#include "WineriesHeader.h"

//NOTE: When dealing with the indexes of the wineries, this code is
//the wineries number rather than it's index. (Just for reference if
//anyone writes more code).

//This constructor will create a new Winery for every winery in the input
//file wineries.txt, storing them all in a vector located in the Wineries
//Class
Wineries::Wineries()
{
    total = 0;
    QString test;
    int currentWineryNumber = 1;
    ifstream inFile;
    inFile.open("wineries.txt");
    totalWineries = 0;

    //taking in the total wineries from the first line to start the program
    inFile >> totalWineries;
    inFile.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int infile = 0; infile < totalWineries; infile++)
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

        //incrementing the total number of Wineries
        listOfWineries.push_back(newWinery);

    }//END - while(inFile)

    inFile.ignore(numeric_limits<streamsize>::max(), '\n');

    //closing the input file
    inFile.close();
}//END - Default Constructor

//default destructor
Wineries::~Wineries(){}

////MUTATORS//////////////////////////////////////////////////////////////////

//the creation of a new Wineries class will fill the header for the shopping
//cart data "out". NOTE: YOU MUST TELL THE CART WHICH WINERY YOU GOT THE WINE
//FROM FIRST BEFORE USING THIS UPDATE OUTPUT METHOD.
void Wineries::Purchase(string wine, int quantity, bool &firstW)
{
    QString Q;
    ostringstream update;
    wineryInfo temp = listOfWineries[tour.front()-1];
    map<string,bottleInfo>::iterator bottle;

    bottle = temp.offeredWineInfo.find(wine);

    if(bottle != temp.offeredWineInfo.end())
    {
        if(firstW)
        {
            update << temp.name << endl;
            firstW = false;
        }
        update << right << setw(5) << quantity
               << left << "x " << wine << endl;

        total += bottle->second.price * quantity;
        out = update.str();
        Q = Q.fromStdString(out);
        cart += Q;
    }

}//end - update output

//pushing the passed in winery to the class' vector AND updating the text
//file holding all the wineries.
void Wineries::addWinery(wineryInfo newWinery)
{
    //pushing and updating the winery total
    listOfWineries.push_back(newWinery);
    totalWineries++;

    //adding in the new distances to all the other wineries already in the list
    for(int i = 0; i < totalWineries - 1; i++)
    {
        listOfWineries[i].otherWineryDistInfo[totalWineries] =
                listOfWineries[totalWineries - 1].otherWineryDistInfo[i + 1];
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

//	//for debug testing
//	cout << updateStr.str();

    //opening, overwriting and closing the winery list file
    ofstream newFile;

    remove("wineries.txt");

    newFile.open("wineries.txt");

    newFile << updateStr.str();

    newFile.close();

}//end - updateList

//the following method will add one bottle of wine to the winery passed in
void Wineries::addWine(int wineryNum, string wineName,
                       int wineVintage, float winePrice)
{
    //creating a new bottle from the passed in information
    bottleInfo newBottle;
    newBottle.price = winePrice;
    newBottle.vintage = wineVintage;

    //creating a new wine in the list for this winery
    listOfWineries[wineryNum - 1].offeredWineInfo[wineName] = newBottle;

    //incrememting the total number of wines offered at the selected winery
    listOfWineries[wineryNum - 1].numWinesOffered += 1;

}//end - addWine


//the following method will change the price for the selected bottle on wine
void Wineries::changeWinePrice(int wineryNum, string wineName, float newPrice)
{
    //creating a new wine in the list for this winery
    listOfWineries[wineryNum - 1].offeredWineInfo[wineName].price = newPrice;
}

//travel a distance
void Wineries::Travel(float add)
{
    traveled += add;
}

void Wineries::Next()
{
    int temp;
    temp = tour.front();
    tour.pop();
    listOfWineries[temp-1].otherWineryDistInfo(tour.front())
}


////ACCESSORS/////////////////////////////////////////////////////////////////
//returns the cart
QString Wineries::Checkout()
{
    return cart;
}

//returns the total price for output
QString Wineries::TotalPrice()
{
    QString Q;
    ostringstream update;
    update << "$ " << fixed << setprecision(2) << total;
    out = update.str();
    return Q.fromStdString(out);
}

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
string Wineries::print( int wineryNumber )
{
    stringstream returnStr;

    if(!isEmpty())
    {
        if(wineryNumber > 0 && wineryNumber <= totalWineries)
        {
            returnStr << listOfWineries[wineryNumber-1].name << "\n"
                      << "\n" << "WINES OFFERED:\n";

            //adding all the wines offered for that winery
            map<string, bottleInfo>::iterator
                                 it3 = listOfWineries[wineryNumber-1].offeredWineInfo.begin();

            //adding wine informaiton
            for(;it3 != listOfWineries[wineryNumber-1].offeredWineInfo.end(); it3++)
            {
                returnStr << endl;
                returnStr << it3->first          << endl
                          << "   vintage: " << it3->second.vintage << endl
                          << "   price: " << it3->second.price;
            }//end - for it

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

//return true is there are no wineries in the list
bool Wineries::isEmpty( ) const
{
    return totalWineries == 0;
}//end - isEmpty

//given the winery the user wishes to start at, this method will generate a
//route between that and the number of wineries that are to be visited.
//This route will be generated by the shortest distance between the starting
//winery and the next, then the next shortest from that and so on.
void Wineries::findRoute(int currWinery, int numWineries)
{
    vector<int> alloptions;
    vector<int>::iterator eraser;
    int index;
    float shortest;
    float test;
    int next;
    traveled = 0;

    for(index = 0; index < totWineries(); index++)
    {
        alloptions.push_back(index+1);
    }

    while(!tour.empty())
    {
        tour.pop();
    }


    while(numWineries >= 0)
    {
        eraser = alloptions.begin();
        while(*eraser != currWinery)
        {
            eraser++;
        }

        tour.push(currWinery);
        alloptions.erase(eraser);

        next = alloptions.front();
        shortest = listOfWineries[currWinery-1].otherWineryDistInfo[next];


        index = 0;
        while(index < alloptions.size())
        {
            test = listOfWineries[currWinery-1].otherWineryDistInfo[alloptions[index]];
            if(test < shortest)
            {
                next = alloptions[index];
                shortest = test;
            }
            index++;
        }
        currWinery = next;
        numWineries--;
    }
}//end - findRoute

//starting at the winery that is the closest to the Canyon Villa destonation,
//a route will be generated between that winery and all the other wineries
//in the same fashion as the findRoute method
void Wineries::visitAll()
{
    //Find the shortest winery from canyon villa
    //pass that winery into the find Distance method
    int closestWinerytoCanyonVilla;
    float shortest = 100;

    for(int index = 0; index < totalWineries; index++)
    {
        if(listOfWineries[index].otherWineryDistInfo[index+1] < shortest)
        {
            closestWinerytoCanyonVilla = index+1;
            shortest = listOfWineries[index].otherWineryDistInfo[index+1];
        }
    }

    findRoute(closestWinerytoCanyonVilla , totalWineries-1);
}//end - visitAll

//finding the route based on the users list of wineries
void Wineries::findSpecificRoute(vector<int> alloptions)
{
    vector<int>::iterator eraser;
    int numWineries = alloptions.size() -1;
    int currWinery;
    int index;

    float test;
    int next;
    int closestWinerytoCanyonVilla;
    float shortest = 100;
    traveled = 0;

        for(eraser = alloptions.begin(); eraser < alloptions.end(); eraser++)
        {
            index = *eraser -1;
            if(listOfWineries[index].otherWineryDistInfo[index+1] < shortest)
            {
                closestWinerytoCanyonVilla = index+1;
                shortest = listOfWineries[index].otherWineryDistInfo[index+1];
            }
        }

        currWinery = closestWinerytoCanyonVilla;

    while(!tour.empty())
    {
        tour.pop();
    }

    while(numWineries >= 0)
    {
        eraser = alloptions.begin();
        while(*eraser != currWinery)
        {
            eraser++;
        }

        tour.push(currWinery);
        alloptions.erase(eraser);

        next = alloptions.front();
        shortest = listOfWineries[currWinery-1].otherWineryDistInfo[next];


        index = 0;
        while(index < alloptions.size())
        {
            test = listOfWineries[currWinery-1].otherWineryDistInfo[alloptions[index]];
            if(test < shortest)
            {
                next = alloptions[index];
                shortest = test;
            }
            index++;
        }
        currWinery = next;
        numWineries--;
    }

}//end - findSpecificRoute

//returns distance traveled
float Wineries::TotDist()
{
    return traveled;
}
