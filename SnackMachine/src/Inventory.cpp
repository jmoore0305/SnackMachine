//Author: Justin Moore
//FileName: Inventory.cpp
//Date: 3/14/23
//Description: This class will store the inventory
//for the snack machine. It will also update, run
//checks, and print current inventory status
#include "Inventory.h"

//initializing starting inventory
Inventory::Inventory()
{
    gumInventory = 2;
    peanutsInventory = 2;
    cheeseCrackersInventory = 2;
    mandmsInventory = 2;
    totalInventory = gumInventory + peanutsInventory + cheeseCrackersInventory + mandmsInventory;
}

//destructor
Inventory::~Inventory()
{
    //dtor
}

//updating the inventory based on the users selection
void Inventory::updateInventory(string selection)
{
    if(selection == "G")
        gumInventory--;
    else if(selection == "P")
        peanutsInventory--;
    else if(selection == "C")
        cheeseCrackersInventory--;
    else
        mandmsInventory--;
}

//used to check whether the users selection is in stock
bool Inventory::checkInventory(string selection)
{
    if(selection == "G" && gumInventory <= 0)
    {
        cout << "Out of gum. Please make another selection." << endl << endl;
        return true;
    }
    if(selection == "P" && peanutsInventory <= 0)
    {
        cout << "Out of peanuts. Please make another selection." << endl << endl;
        return true;
    }
    if(selection == "C" && cheeseCrackersInventory <= 0)
    {
        cout << "Out of cheese crackers. Please make another selection." << endl << endl;
        return true;
    }
    if(selection == "M" && mandmsInventory <= 0)
    {
        cout << "Out of m and m's. Please make another selection." << endl << endl;
        return true;
    }
    return false;
}

//used to display the current inventory if the user selected "Z"
void Inventory::printInventory()
{
    cout << "gum - " << gumInventory << endl;
    cout << "peanuts - " << peanutsInventory << endl;
    cout << "cheese crackers - " << cheeseCrackersInventory << endl;
    cout << "M AND M's - " << mandmsInventory << endl;
}


//getters and setters from here down

void Inventory::setGumInventory(int g)
{
    gumInventory = g;
}

int Inventory::getGumInventory()
{
    return gumInventory;
}

void Inventory::setPeanutsInventory(int p)
{
    peanutsInventory = p;
}

int Inventory::getPeanutsInventory()
{
    return peanutsInventory;
}

void Inventory::setCheeseCrackersInventory(int c)
{
    cheeseCrackersInventory = c;
}

int Inventory::getCheeseCrackersInventory()
{
    return cheeseCrackersInventory;
}

void Inventory::setMandmsInventory(int m)
{
    mandmsInventory = m;
}

int Inventory::getMandmsInventory()
{
    return mandmsInventory;
}

void Inventory::decrementTotalInventory()
{
    totalInventory--;
}

int Inventory::getTotalInventory()
{
    return totalInventory;
}










