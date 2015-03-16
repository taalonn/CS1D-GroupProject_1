#ifndef WineriesHeader_H_
#define WineriesHeader_H_
#include <queue>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <limits>
#include <ios>
#include <windows.h>
#include <QDebug>
#include <QString>
using namespace std;

//information holding the vintage (year) and price of bottle
struct bottleInfo{
    //year the wine was bottled
    int   vintage;
    //how much this specific bottle of wine costs
    float price;
};

//holding all the relevant information for the wineries
struct wineryInfo
{
    //THIS wineries name
    string name;
    //THIS wineries number
    int	   ownNumber;
    //winery number is key that corresponds to a distance to other wineries
    map<int, float> otherWineryDistInfo;
    //holding the number of wines that are offered at each winery
    int    numWinesOffered;
    //Name of wine is the key that corresponds to the bottleInfo
    map<string, bottleInfo> offeredWineInfo;
};

class Wineries {
    public:
        //Default constructor - will create a vector according to the current
        //wineries.txt
        Wineries();
        //default destructor
        virtual ~Wineries();

//MUTATORS////////////////////////////////////////////////////////////////////

        //this will add one new winery to the current list of wineries
        //stored in the class AND it will update the wineries text file
        void addWinery(wineryInfo newWinery);

        //will add a new bottle of wine to the winery specified
        void addWine(int wineryNum, string wineName,
                     int wineVintage, float winePrice);

        //will change the price for the selected bottle on wine
        void changeWinePrice(int wineryNum, string wineName, float newPrice);

        //This method will update the text file that stores the data
        //making the data persistent between executions
        void updateList();

        //methods for the shopping cart
        //will take a wine, purchase price and an amount and add it to an output
        void updateOutput(string wine, float purchase, int amount);
        //a header that will preface the wine with where it was purchased at
        void winePurchacedAt(int wineryNumber);
        //returns a string formatted with all the wine purchase information
        string getOutput();

//ACCESSORS///////////////////////////////////////////////////////////////////
        //returns the name of the passed in winery number
        string nameOf(int wineryNumber) const;

        //returns the contents of the passed in winery number (Formatted in
        //a string)
        string print(int wineryNumber);

        //returns the contents of every winery currently in the list
        //(formatted as a string).
        string printAll() const;//NOT YET IMPLEMENTED

        //returns the total number of wineries
        int totWineries( ) const;

        //return true if there are no wineries in the list
        bool isEmpty( ) const;

        //generating a shortest-path tour based on the starting winery and
        //the number of wineries the user wishes to visit
        void findRoute(int startingWinery, int numWineries);

        //generates a route to all the wineries starting from the winery that
        //is closest to the CanyonVilla destination
        void visitAll( );

        //finding the route based on the users list of wineries
        void findSpecificRoute( vector<int> alloptions );

        queue<int> tour;

private:
            vector<wineryInfo> listOfWineries;
            vector<wineryInfo>::iterator it;
            int totalWineries;
            //data members for the shopping cart
            float  total;
            string out;
};
#endif /* Wineries_H_ */

