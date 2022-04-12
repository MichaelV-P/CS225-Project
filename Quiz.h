//
// Created by deade on 4/7/2022.
//

#ifndef UNTITLED11_QUIZ_H
#define UNTITLED11_QUIZ_H
#pragma once
#include "Difficulty.h"
#include "Subject.h"
#include "Score.h"
#include "Questions.h"
class Quiz : public Difficulty, public Subject{
private:
    char chosenSubject;
    char chosenDifficulty;
public:
    Quiz(char userSubject, char userDifficulty);
    int startQuiz();

};
#endif //UNTITLED11_QUIZ_H
