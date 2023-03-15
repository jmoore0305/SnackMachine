//Author: Justin Moore
//FileName: Inventory.h
//Date: 3/14/23
//Description: This class will store the inventory
//for the snack machine. It will also update, run
//checks, and print current inventory status

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
#include <iostream>

using namespace std;

class Inventory
{
    public:
        Inventory();
        virtual ~Inventory();
        void updateInventory(string);
        bool checkInventory(string);
        void printInventory();
        void setGumInventory(int);
        int getGumInventory();
        void setPeanutsInventory(int);
        int getPeanutsInventory();
        void setCheeseCrackersInventory(int);
        int getCheeseCrackersInventory();
        void setMandmsInventory(int);
        int getMandmsInventory();
        void decrementTotalInventory();
        int getTotalInventory();
    private:
        int gumInventory;
        int peanutsInventory;
        int cheeseCrackersInventory;
        int mandmsInventory;
        int totalInventory;

};

#endif // INVENTORY_H
