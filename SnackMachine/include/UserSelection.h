//Author: Justin Moore
//FileName: UserSelection.h
//Date: 3/14/23
//Description: This class will get and store the users
//snack selection

#ifndef USERSELECTION_H
#define USERSELECTION_H
#include <string>
using namespace std;
class UserSelection
{
    public:
        UserSelection();
        virtual ~UserSelection();
        void checkSelectionValidity();
        void areYouSure();
        void setSnackName(string);
        string getSnackName();

   private:
     string snackName;
};

#endif // USERSELECTION_H
