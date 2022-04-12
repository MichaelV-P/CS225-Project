//
// Created by deade on 4/8/2022.
//
#include "userNameInput.h"
#include <iostream>
#include <string>
using namespace std;

string userNameInput(){
    string userEntry; //maybe user getline, not too big of a problem rn //only allow 4 chars for name
    const int LOW = 4;
    const string ERROR_MSG1 = "Invalid number of charaters in userName, please try agian. ";
    cout << "Please enter a username" << endl;
    cin >> userEntry; //userName should record a string datatype
    if (userEntry.length() < LOW || userEntry.length() > LOW) { //error for not enough charaters in userName string
        throw(ERROR_MSG1);
    }
    return userEntry;
}
