#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "wineriesHeader.h"
using namespace std;

struct Person
{
	string name;
	string address;
	string address2;
	string zip;
	string interest;
	string rating;
	Person* next;
};

struct Reviews
{
	string date;
	string name;
	string review;
};

//PROTOTYPES
bool AdminAccess(string attemptUser, string attemptPass);

#endif /* HEADER_H_ */
