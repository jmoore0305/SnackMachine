//Author: Justin Moore
//FileName: UserSelection.cpp
//Date: 3/14/23
//Description: This class will get and store the users
//snack selection

#include "UserSelection.h"
#include <iostream>

//initializing snackName
UserSelection::UserSelection()
{
    snackName = "";

}

//destructor
UserSelection::~UserSelection()
{
    //dtor
}

//used to check whether the input is an option
//and storing the users choice
void UserSelection::checkSelectionValidity()
{
        string choice = " ";

        do
        {
            cout << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            //display user choices
            cout << "Cost of Gum ($0.50), Peanuts ($0.55), Cheese Crackers ($0.65), or M&Ms ($1.00)." << endl << endl;
            //allow user to enter choice

            cout << "Enter item selection: Gum (G), Peanuts (P), Cheese Crackers (C), or M&Ms (M)" << endl << endl;
            cin >> choice;


            cout << endl;
            //check to make sure choice is valid
        } while (choice != "G" && choice !=   "P" && choice !=  "C" && choice !=  "M" && choice != "Z");

        setSnackName(choice);

}

//used to ask user if they are sure if
//they want the current choice
void UserSelection::areYouSure()
{
        string choice = " ";

        do
        {
            cout << "You selected " << getSnackName() << " Is this correct (Y/N)?" << endl << endl;

            cin >> choice;

            cout << endl;

            //check to make sure choice is valid
        } while (choice != "Y" && choice !=   "N");

        if(choice == "N")
            checkSelectionValidity();


}

//getters and setters


void UserSelection::setSnackName(string s)
{
    snackName = s;
}

string UserSelection::getSnackName()
{
    return snackName;
}






