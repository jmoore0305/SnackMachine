//Author: Justin Moore
//FileName: Prices.cpp
//Date: 3/14/23
//Description: This class will store and calculate prices for the
//snack machine items listed for sale

#include "Prices.h"
#include <iostream>
#include <math.h>
//initializing prices of items to sell
Prices::Prices()
{
    gum = 50;
    peanuts = 55;
    cheeseCrackers = 65;
    mandms = 100;
    unit = 0;
}

//destructor
Prices::~Prices()
{
    //dtor
}

//allowing user to enter what money unit to use
//setting the current unit with that choice
//using selection to know what item to get price from
//setting the items price accordingly
//if the user does not enter enough money
//they will be asked to enter more
void Prices::calcSnack(string selection)
{
    bool enoughMoney = false;
    string choice = "";
    int total = 0;


    do
    {
          do
          {
              cout << "Dimes(D), Quarters(Q), and Dollar Bills(B):" << endl << endl;
              cin >> choice;
              cout << endl;
          } while(choice != "D" && choice != "Q" && choice != "B");

          if(choice == "D")
            setCurrentUnit(10);
          else if (choice == "Q")
            setCurrentUnit(25);
          else
            setCurrentUnit(100);

          int unit = getCurrentUnit();



          if(selection == "G")
          {
            total = getGum() - unit;
            enoughMoney = checkTotal(total, "G");
            if(!enoughMoney)
                setGum(total);
            else
                setGum(50);
          }
          else if (selection == "P")
          {
            total = getPeanuts() - unit;
            enoughMoney = checkTotal(total, "P");
            if(!enoughMoney)
                setPeanuts(total);
            else
                setPeanuts(55);
          }
          else if (selection == "C")
          {
            total = getCheeseCrackers() - unit;
            enoughMoney = checkTotal(total, "C");
            if(!enoughMoney)
                setCheeseCrackers(total);
            else
                setCheeseCrackers(65);

          }
          else
          {
            total = getMandMs() - unit;
            enoughMoney = checkTotal(total, "M");
            if(!enoughMoney)
                setMandMs(total);
            else
                setMandMs(100);

          }



    } while(!enoughMoney);

}

//printing the users selection based on input
//for the display message after item has been displayed
void Prices::printSelectionName(string selection)
{

    if(selection == "G")
        cout << "Gum";
    else if(selection == "P")
        cout << "Peanuts";
    else if(selection == "C")
        cout << "Cheese Crackers";
    else
        cout << "M AND M's";
}

//used to determine if change is needed OR
//if exact change has been entered OR
//if the user needs to enter more
//appropriate messages are displayed
bool Prices::checkTotal(int total, string selection)
{

    if(total < 0)
    {
        total = abs(total);
        cout << "Enough money entered." << endl << endl;
        printSelectionName(selection);
        cout << " has been dispensed. ";
        cout << " Change of " << total << " cents has been returned." << endl << endl;
        return true;
    }
    else if(total == 0)
    {
        cout << "You have entered exact change." << endl << endl;
        printSelectionName(selection);
        cout << " has been dispensed. " << endl << endl;

        return true;
    }
    else
    {

        cout << "You need to enter " << total << " cents more." << endl << endl;

        return false;
    }
}


//displaying prices to the user
void Prices::printPrice(string selection)
{
    if(selection == "G")
        cout << "Enter at least 50 cents for selection" << endl << endl;
    else if(selection == "P")
        cout << "Enter at least 55 cents for selection" << endl << endl;
    else if(selection == "C")
        cout << "Enter at least 65 cents for selection" << endl << endl;
    else
        cout << "Enter at least 100 cents for selection" << endl << endl;
}


//getters and setters from here down


void Prices::setCurrentUnit(int u)
{
    unit = u;
}

int Prices::getCurrentUnit()
{
    return unit;
}


void Prices::setGum(int g)
{
    gum = g;
}

int Prices::getGum()
{
    return gum;
}

void Prices::setPeanuts(int p)
{
    peanuts = p;
}

int Prices::getPeanuts()
{
    return peanuts;
}

void Prices::setCheeseCrackers(int c)
{
    cheeseCrackers = c;
}

int Prices::getCheeseCrackers()
{
    return cheeseCrackers;
}

void Prices::setMandMs(int m)
{
    mandms = m;
}

int Prices::getMandMs()
{
    return mandms;
}

