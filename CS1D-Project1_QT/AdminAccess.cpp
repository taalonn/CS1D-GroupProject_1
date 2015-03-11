#include "header.h"

//Admin Access function will take in a user account name and password and
//check them against the database of accounts and passwords already stored.
//returns true if valid login
bool AdminAccess(QString attemptUser, QString attemptPass)
{
    bool gainAccess = false;

    QString realUser = "TALON";
    QString realPass = "likesboys!";

    attemptUser = attemptUser.toUpper();

    if ((attemptUser == realUser) && (attemptPass == realPass))
    {
        gainAccess = true;
    }

    return gainAccess;
}//end - AdminAccessS


