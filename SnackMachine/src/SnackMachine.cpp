//Author: Justin Moore
//FileName: SnackMachine.cpp
//Date: 3/14/23
//Description: This is a simulation of a snack machine.
//User enters change into machine and receives snack
//with correct change.
//This will construct the objects needed and run the program

#include "SnackMachine.h"
#include "Prices.h"
#include "UserSelection.h"
#include "Inventory.h"
#include <iostream>

using namespace std;

//constructor - instantiating objects for the main program which will be run in runSnackMachine
SnackMachine::SnackMachine()
{
    Prices* p = new Prices();
    UserSelection* u = new UserSelection();
    Inventory* i = new Inventory();
    runSnackMachine(p, u, i);
}

//destructor
SnackMachine::~SnackMachine()
{
    //dtor
}

//main logic of the program - displays choices, receives input, validates input, updates inventory, calculates total
void SnackMachine::runSnackMachine(Prices* prices, UserSelection* userSelection, Inventory* inventory)
{
    cout << "Welcome to Mr. Zippy's vending machine." << endl << endl;

    //loop till the total inventory of the machine is empty
    while(inventory->getTotalInventory() != 0)
    {
        //get the users snack selection and validate whether it's even an option
        userSelection->checkSelectionValidity();
        //return the snack selection for future use
        string select = userSelection->getSnackName();
        //check whether that snack is in stock
        bool empty = inventory->checkInventory(select);
        //if empty restart the loop, if not empty ask user if they are sure they want that snack selection
        if(empty)
            runSnackMachine(prices, userSelection, inventory);
        userSelection->areYouSure();
        //if the user did not select "Z" then update the inventory for that item
        //else allow the user to enter a secret code "Z" to display the current inventory count
        if(select != "Z")
            inventory->updateInventory(select);
        else
        {
            inventory->printInventory();
            runSnackMachine(prices, userSelection, inventory);
        }

        //print the prices for each item in the snack machine
        prices->printPrice(select);
        //calculate the total based off of the users selection and display
        //exact change message OR how much change to return OR how much change is still needed
        prices->calcSnack(select);
        //if you did not view inventory then subtract the total inventory by 1
        if(select != "Z")
            inventory->decrementTotalInventory();

     }
    //display message and end program
    cout << "All out of stock. Please try again later. Machine is shutting down..." << endl << endl;
    exit( 1 );

}
