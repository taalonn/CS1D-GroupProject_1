#ifndef WineriesHeader_H_
#define WineriesHeader_H_
#include <queue>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <limits>
#include <ios>
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
	//Total number of wineries in this list
	int    numOfWineries;
	//Name of wine is the key that corresponds to the bottleInfo
	map<string, bottleInfo> otherWineryInfo;
	//number of miles the main THIS winery is away from Canyon Villa
	float  milesFromCanyonVilla;
	//holding the number of wines that are offered at each winery
	int    numWinesOffered;
	//winery number is key that corresponds to a distance to other wineries
	map<int, float> otherWineryDistInfo;
};

class Wineries {
	public:
		//Default constructor
		Wineries();
		//default destructor
		virtual ~Wineries();

//MUTATORS/////////////////////////////////////////////////////////////////////

		//upon successful login,
		//a new username and password will be added to the queue
		void SignUp();
		//ACCESSORS////////////////////////////////////////////////////////////////////
		//returns true if login was successful
		bool LogIn(bool &adminStatus);
		//updates the current account text file
		void CloseWineries();
		//returns the current total number of Wineries
		int GetTotWineries();
		//returns true if passed in string matches username AND password in list
		bool CheckLogin(string username, string password, unsigned int i,
		int &count);
		//displays the current contents of the queue
		void Print();
		//returns true if the passed in string matches username in list
		bool CheckUsername(string username);
		//returns true if the username is an admin
		bool CheckAdmin(bool adminStatus, int admin);
		//ADMIN FUNCTIONS
		//Prints the main page and menu for an admin user.
		void AdminPrint();
		//Takes in admin choice for menu and does the operation.
		void AdminSelection();
		//Searches for a username.
		void SearchUserName();
		//Searches for a company name.
		void SearchCompanyName();
		//Searches for a city.
		void SearchCity();
		//Searches for a state.
		void SearchState();
		//Searches for a Zip code.
		void SearchZip();
		//Searches for users based on their interest.
		void SearchTheirInterest();
		//Searches for users based on our interest in their business.
		void SearchOurInterest();
		//Prints a page and menu for modifying the list of Wineries.
		void AccountOptionsMenu();
		//Takes in admin choice and initiates the desired operation.
		void AccountOptionsSelection();
		//Allows the admin to create a new user.
		void CreateUser();
		//Menu to change existing users.
		void EditUserMenu();
		//Takes in admin choice for editting a user and initiates the operation.
		void EditUser();
		//Allows admin to change ourInterest for a desired user.
		void EditInterest();
		//Allows the admin to change a regular user into an another admin.
		void EditAdminStatus();
		//Allows admin to delete a user.
		void DeleteUser();

	private:
			vector<wineryInfo> listOfWineries;
			vector<wineryInfo>::iterator it;
			int totalWineries;
};
#endif /* Wineries_H_ */
