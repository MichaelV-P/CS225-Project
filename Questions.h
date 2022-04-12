//
// Created by deade on 4/7/2022.
//

#ifndef UNTITLED11_QUESTIONS_H
#define UNTITLED11_QUESTIONS_H
#pragma once
#include <string>
#include <iostream>
#include "Score.h"
using namespace std;
//Need to update Questions.cpp after Bishop finishes it & also complete testing to see if I set the .h/.cpp files for this correctly
class Question {
protected:
    string question;
    string answers[4];
    string correctAnswer;
public:
    Question();
    void setQuestion(string q, string a1, string a2, string a3, string a4, string c);
    Score playQuestion(Score score, char userDifficulty);
};
#endif //UNTITLED11_QUESTIONS_H
