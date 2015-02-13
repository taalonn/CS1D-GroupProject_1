#include <iostream>
using namespace std;

//Admin Access function will take in a user account name and password and
//check them against the database of accounts and passwords already stored.
//returns true if valid login
bool AdminAccess(string attemptUser, string attemptPass)
{
	bool gainAccess;
	gainAccess = false;

	string realUser;
	string realPass;

	realUser = "schoolgirl";
	realPass = "talonlikesboys";

	if ((attemptUser == realUser) && (attemptPass == realPass))
	{
		cout << "Admin Access Approved." << endl;
		gainAccess = true;
	}

	return gainAccess;
}//end - AdminAccessS

