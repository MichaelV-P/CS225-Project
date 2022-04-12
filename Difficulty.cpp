//
// Created by deade on 4/7/2022.
//
#include "Difficulty.h"
//option for user to choose Difficulty in the game
Difficulty::Difficulty() { }//Everything under this was public
Difficulty::Difficulty(char userSelectedDifficulty) { userDifficulty = userSelectedDifficulty; }

ostream& operator<<(ostream& os, const Difficulty& p) {
    os << "The Difficulty that was chosen was " << p.userDifficulty << endl;
    return os;
}