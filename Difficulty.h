//
// Created by deade on 4/7/2022.
//

#ifndef UNTITLED11_DIFFICULTY_H
#define UNTITLED11_DIFFICULTY_H
#pragma once
#include <iostream>
using namespace std;
class Difficulty { //option for user to choose Difficulty in the game
protected:
    char userDifficulty;
public:
    Difficulty();
    Difficulty(char userSelectedDifficulty);
    friend ostream& operator<<(ostream& os, const Difficulty&);
};
#endif //UNTITLED11_DIFFICULTY_H
