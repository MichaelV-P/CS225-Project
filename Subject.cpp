//
// Created by deade on 4/7/2022.
//
#include "Subject.h"

//option for user to select the Subject of the quiz
Subject::Subject() { } //Everything under this was public
Subject::Subject(char userSelectedSubject) { userSubject = userSelectedSubject; }

ostream& operator<<(ostream& os, const Subject& q) {
    os << "The Subject that was chosen was " << q.userSubject << endl;
    return os;
}