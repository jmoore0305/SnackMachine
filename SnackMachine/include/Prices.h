//Author: Justin Moore
//FileName: Prices.h
//Date: 3/14/23
//Description: This class will store and calculate prices for the
//snack machine items listed for sale
#ifndef PRICES_H
#define PRICES_H
#include <string>
using namespace std;

class Prices
{
    public:
        Prices();
        virtual ~Prices();
        void printPrice(string);
        void calcSnack(string);
        void printSelectionName(string);
        bool checkTotal(int, string);
        void setCurrentUnit(int);
        int getCurrentUnit();
        void setGum(int);
        int getGum();
        void setPeanuts(int);
        int getPeanuts();
        void setCheeseCrackers(int);
        int getCheeseCrackers();
        void setMandMs(int);
        int getMandMs();




    private:
        int gum;    //price of gum
        int peanuts; //price of peanuts
        int cheeseCrackers; //price of cheese crackers
        int mandms;     //price of m and m's
        int unit;   //money unit the user selected (dime, quarter, dollar)
};

#endif // PRICES_H
