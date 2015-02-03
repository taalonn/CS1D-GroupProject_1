#include "accountsheader.h"

//Creating an account will generate a queue of account names and passwords
//	from the specified input file.
Accounts::Accounts()
{
	string          name;
	int             ownNumber;
	int             numOfWineries;
	distInfo        theirNumAndDist;
	float           milesFromCanyonVilla;
	int             numWinesOffered;
	offeredWineInfo offeredwine;
	totalAccounts = 0;

	ifstream inFile;
	inFile.open("wineries.txt");

	//Will create a vector of account names and passwords
	while(inFile)
	{
		//incrementing the total number of accounts
		totalAccounts++;

		//taking in user address information
		getline(inFile, name);
		getline(inFile, address);
		getline(inFile, city);
		getline(inFile, state);
		inFile >> zip;
		inFile.ignore(10000, '\n');

		//taking in the users interest level
		getline(inFile, theirInterest);

		//taking in our interest level, it's been assigned yet
		getline(inFile, ourInterest);

		//Assigning admin status
		inFile >> adminStatus;
		inFile.ignore(10000, '\n');


		//taking in the username and and password from the input file
		getline(inFile, username);
		getline(inFile, password);

		//creating new instance of accInfo struct to fill with data
		accInfo nextAccount;
		nextAccount.name          = name;
		nextAccount.address       = address;
		nextAccount.city          = city;
		nextAccount.state         = state;
		nextAccount.zip			  = zip;
		nextAccount.theirInterest = theirInterest;
		nextAccount.ourInterest   = ourInterest;
		nextAccount.adminStatus   = adminStatus;
		nextAccount.username      = username;
		nextAccount.password      = password;

		//Adds nextAccount to the vector.
		accounts.push_back(nextAccount);
		inFile.ignore(10000, '\n');
	}//END - while(inFile)
	//closing the input file
	inFile.close();
}//END - Default Constructor

//default destructor
Accounts::~Accounts(){}

//MUTATORS/////////////////////////////////////////////////////////////////////

//Sign In method will prompt the user for a username and password, the sign
//in method will then check the validity of the username against the usernames
//already created as well as for being a valid username of over a set length
void Accounts::SignUp()
{
	string username;
	string password;
	string companyName;
	string address;
	string city;
	string state;
	int zip;
	int selection;
	string theirInterest;
	string passwordConfirm;
	bool   validUsername = false;

	//catch classes
	class invalidPasswordLength{};
	class invalidUsernameLength{};
	class passwordConfermationFail{};
	class usernameAlreadyTaken{};
	class invalidGeneralLength{};
	class invalidStateLength{};

	do
	{
		try
		{
			cout << "Please enter a username: ";
			getline(cin, username);

			//error checking for if the username is already taken
			if(CheckUsername(username))throw usernameAlreadyTaken();

			//error checking for minimum length for username
			if(username.length() < 5 || username.length() > 25)throw invalidUsernameLength();
			else
			{
				validUsername = true;
			}
		}

		catch(usernameAlreadyTaken)
		{
			cout << "::ATTENTION:: Username already taken, "
					 "please try again\n";
		}

		catch(invalidUsernameLength)
		{
			cout << "::ATTENTION:: Invalid username, must be between "
					"5 and 25 characters, "
					 "please try again\n\n";
		}


	}while(!validUsername);

	do
	{
		try
		{
			cout << "Please enter a password: ";
			getline(cin, password);

			//error checking for minimum password size
			if(password.length() < 5 || password.length() > 18)throw invalidPasswordLength();

			cout << "Please confirm password: ";
			getline(cin, passwordConfirm);

			//error checking for account input
			if(password != passwordConfirm)throw passwordConfermationFail();

		}
		catch(passwordConfermationFail)
		{
			cout << "::ATTENTION:: Passwords do not match, "
					 "please try again\n";
		}


		catch(invalidPasswordLength)
		{
			cout << "::ATTENTION:: Invalid password, must be between "
					"5 and 18 characters, "
					 "please try again\n\n";
		}
	}while(password.length() < 5 || password.length() > 18 || password != passwordConfirm);


	do
	{
		try
		{
			//input company name from user
			cout << "Please enter in your company name: ";
			getline(cin, companyName);

			//error checking account from user
			if(companyName.length() > 30 || (companyName.length() == 0))throw invalidGeneralLength();
		}
		catch(invalidGeneralLength)
		{
			cout << "::ATTENTION:: Invalid input, must be greater than"
					" 0 characters, and less "
					"than 30 characters, please try again\n\n";
		}
	}while(companyName.length() > 30 || companyName.length() == 0);

	do
	{
		try
		{
			//input address from user
			cout << "Please enter in your address (street address): ";
			getline(cin, address);

			//error checking account from user
			if(address.length() > 30 || address.length() == 0)throw invalidGeneralLength();
		}
		catch(invalidGeneralLength)
		{
			cout << "::ATTENTION:: Invalid input, must be greater than"
							" 0 characters, and less "
							"than 30 characters, please try again\n\n";
		}
	}while(address.length() > 30 || address.length() == 0);

	do
	{
		try
		{
			//input city from user
			cout << "Please enter in your city: ";
			getline(cin, city);

			//error checking account from user
			if(city.length() > 30 || city.length() == 0)throw invalidGeneralLength();
		}
		catch(invalidGeneralLength)
		{
			cout << "::ATTENTION:: Invalid input, must be greater than"
						" 0 characters, and less "
						"than 30 characters, please try again\n\n";
		}
	}while(city.length() > 30 || city.length() == 0);

	do
	{
		try
		{
			//input state from user
			cout << "Please enter in your state: ";
			getline(cin, state);

			//error checking account from user
			if (state.length() != 2)throw invalidStateLength();
		}
		catch(invalidStateLength)
		{
			cout << "::ATTENTION:: Invalid state input, must be 2"
					" characters\n\n";
		}
	}while (state.length() != 2);

	do
	{
		//input zip from user
		cout << "Please enter in your zip code: ";
		zip = GetValidInt(99999, 0);

	}while(zip > 99999 || zip < 0);

	do
	{
			//input interest from user
			cout << "\nWhat is your interest in the company?\n";
			cout << "1-- Very Interested\n"
					"2-- Somewhat Interested\n"
					"3-- Not Interested\n"
					"4-- Never Call Again\n"
					"Selection: ";

			selection = GetValidInt(4,  0);

			switch (selection)
			{
				case 1: theirInterest = "very interested";
					   break;
				case 2: theirInterest = "somewhat interested";
					   break;
				case 3: theirInterest = "not interested";
					   break;
				case 4: theirInterest = "never call again";
					break;
				default: cout << "***INVALID INPUT***";
			}


			cout << "\nAccount created! You may now log in\n";
	}while(selection > 4 || selection < 0);
			//creating new instance of accInfo struct to fill with data
			accInfo nextAccount;

			//assigning the users new log in information
			nextAccount.username = username;
			nextAccount.password = password;

			StringToupper(companyName);
			StringToupper(address);
			StringToupper(city);
			StringToupper(state);

			//Sets the class information from the inputs from the user
			nextAccount.name          = companyName;
			nextAccount.address       = address;
			nextAccount.city          = city;
			nextAccount.state         = state;
			nextAccount.zip			  = zip;
			nextAccount.theirInterest = theirInterest;

			//setting defaults for all the rest of the information
			nextAccount.ourInterest   = "nice to have";
			nextAccount.adminStatus   = 0;

			//This part will place the newly created user information into
			//the proper place in the alphabetized list
			int  index = 0;
			bool notFound = true;

			it = accounts.begin();

			//Loops until the correct placement is found, or the end of the vector.
			while(index < totalAccounts && notFound)
			{
				if(nextAccount.name < accounts[index].name)
				{
					accounts.insert(it, nextAccount);
					notFound = false;
				}
				else if(index == totalAccounts - 1)
				{
					accounts.push_back(nextAccount);
					notFound = false;
				}
				it++;
				index++;
			}

			it = accounts.begin();

			totalAccounts++;

			system("pause");


}//END - try


//ACCESSORS////////////////////////////////////////////////////////////////////

//The following method will allow the user to log into their account. It will
//prompt for a username and password and check them against the already-
//created queue of usernames and passwords
bool Accounts::LogIn(bool &adminStatus)
{
	bool loginOk = false;
	adminStatus = false;
	int admin = 0;
	int count = 0;
	string username;
	string password;
	int i =0;

	do
	{
		cout << "Enter username: ";
		getline(cin, username);
		cout << "Enter password: ";
		getline(cin, password);

		loginOk = CheckLogin(username, password, i, count);


		if(loginOk)
		{
			admin = accounts[count-1].adminStatus;
			adminStatus = CheckAdmin(adminStatus, admin);

			if (admin)
			{
				system("CLS");
				cout << "\nLogin successful! Welcome back admin " << username << endl;
			}
			else
			{
				system("CLS");
				cout << "\nLogin successful! Welcome back user " << username << endl;
			}

		}
		else
		{
			cout << "::ERROR:: Invalid username or password, "
					"please try again\n";
		}
	}while(!loginOk);

	return (loginOk);
}//END - LogIn

//Close accounts method will output to a file a current and comprehensive
//list of all the usernames and passwords currently in the program
void Accounts::CloseAccounts()
{
	ofstream outFile;

	//removing the old accountInformation file
	remove("accountInformation.txt");
	//creating new account information text of the same name as the input file
	outFile.open("accountInformation.txt");

	for(unsigned int i = 0; i < accounts.size(); i++)
	{
		outFile << accounts[i].name 		 << endl;
		outFile << accounts[i].address 		 << endl;
		outFile << accounts[i].city 		 << endl;
		outFile << accounts[i].state		 << endl;
		outFile << accounts[i].zip 			 << endl;
		outFile << accounts[i].theirInterest << endl;
		outFile << accounts[i].ourInterest 	 << endl;
		outFile << accounts[i].adminStatus 	 << endl;
		outFile << accounts[i].username 	 << endl;
		outFile << accounts[i].password;

		if(i != accounts.size() - 1)outFile << endl << endl;
	}

	outFile.close();
}//END - CloseAccounts

//returns the total number of accounts
int Accounts::GetTotAccounts()
{
	return totalAccounts;
}//END - GetTotAccounts

//takes in a username and searches through the queue for any same usernames
bool Accounts::CheckLogin(string username, string password, unsigned int i,
		int &count)
{
	bool loginOk = false;
	i = 0;

	while(i < accounts.size() && !loginOk)
	{
		//checking against the passed in username and password
		loginOk = accounts[i].username == username &&
				  accounts[i].password == password;
		i++;
	}

	count = i;

	return loginOk;
}//END - SearchAccounts

//prints the current list of all usernames and passwords. FOR DEV MODE ONLY
void Accounts::Print()
{
	cout << "USER LIST: \n\n";
	for(unsigned int i = 0; i < accounts.size(); i++)
	{
		cout << "Company Name: " << accounts[i].name << endl;
		cout << "Company Address: " << accounts[i].address << endl;
		cout << accounts[i].city << ", ";
		cout << accounts[i].state << " ";
		cout << accounts[i].zip << endl;
		cout << "Their Interest: " << accounts[i].theirInterest << endl;
		cout << "Our Interest: " << accounts[i].ourInterest << endl;
		if (accounts[i].adminStatus == 0)
		{
			cout << "Admin Status: Not Admin\n";
		}
		else
		{
			cout << "Admin Status: Admin\n";
		}

		cout << "Username: " << accounts[i].username << endl;
		if(i <= accounts.size())cout << endl;
	}
	cout << endl << endl;
	system("pause");
}//END - Print

//returns true if a username in the list matches the passed in username
bool Accounts::CheckUsername(string username)
{
	bool sameUsername = false;
	string tempAccount;
	unsigned int i = 0;

	//Runs through the vector to check if the username exists.
	while(i < accounts.size() && !sameUsername)
	{
		tempAccount = accounts[i].username ;
		bool sameName;
		StringToupper(tempAccount);
		StringToupper(username);
		sameName = (tempAccount == username);
		if(sameName)
		{
			sameUsername = true; //changes sameUsername if it finds another instance.
		}
		else
		{
			i++;
		}
	}

	return sameUsername;
}

bool Accounts::CheckAdmin(bool adminStatus, int admin)
{
	//Checks and changes adminStatus based on admin.
	if (admin == 1)
	{
		adminStatus = true;
	}
	else if (admin != 1)
	{
		return false;
	}

	return adminStatus;
}


