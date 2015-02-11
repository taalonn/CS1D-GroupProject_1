#include <iostream>
using namespace std;

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
}

