//Author: Justin Moore
//FileName: SnackMachine.h
//Date: 3/14/23
//Description: This is a simulation of a snack machine.
//User enters change into machine and receives snack
//with correct change.
//This will construct the objects needed and run the program
#ifndef SNACKMACHINE_H
#define SNACKMACHINE_H
#include "Prices.h"
#include "UserSelection.h"
#include "Inventory.h"

class SnackMachine
{
    public:
        SnackMachine();
        virtual ~SnackMachine();
        void runSnackMachine(Prices*, UserSelection*, Inventory*);

};

#endif // SNACKMACHINE_H
