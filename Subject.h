//
// Created by deade on 4/7/2022.
//

#ifndef UNTITLED11_SUBJECT_H
#define UNTITLED11_SUBJECT_H
#pragma once
#include <iostream>
using namespace std;
class Subject { //option for user to select the Subject of the quiz
protected:
    char userSubject;
public:
    Subject();
    Subject(char userSelectedSubject);
    friend ostream& operator<<(ostream& os, const Subject&);
};
#endif //UNTITLED11_SUBJECT_H
