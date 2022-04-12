//
// Created by deade on 4/7/2022.
//
#include "Questions.h"
#include "Score.h"
#include <string>

using namespace std;

    Question::Question(){  }
    void Question::setQuestion(string q, string a1, string a2, string a3, string a4, string c) {
        int random1 = rand() %4;
        int random2 = rand() %4;
        question = q;
        answers[0] = a1;
        answers[1] = a2;
        answers[2] = a3;
        answers[3] = a4;
        correctAnswer = c;
        string temp = answers[random1];
        answers[random1] = answers[random2];
        answers[random2] = temp;
        int random3 = rand() %4;
        int random4 = rand() %4;
        string temp2 = answers[random3];
        answers[random3] = answers[random4];
        answers[random4] = temp2;
    }
Score Question::playQuestion(Score score, char userDifficulty) {
    int userInput;
    int answer = 0;
    int points = 0;
    cout << "/***************************************************************************************************/" << endl;
    cout << question << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "1) "<< answers[0] << endl;
    cout << "2) "<< answers[1] << endl;
    cout << "3) "<< answers[2] << endl;
    cout << "4) "<< answers[3] << endl;
    cout << "Please Enter you guess" << endl;
    cin >> userInput;
    while (!cin || userInput <= 0 || userInput >= 5) { //that was not an int, cin is in error
        cin.clear(); //clear error flag
        cin.ignore(INT_MAX, '\n');
        cout << "Error. Please enter an integer between 1-4 " << endl;
        cin >> userInput;
    }
    userInput -= 1;
    cout << "/**************************************************************************************************/" << endl;
    if (answers[userInput] == correctAnswer) {
        cout << "you're Right!" << endl;
        answer = 1;
        score.streak++;
    } else {
        cout << "You're Incorrect. The correct answer was: " << correctAnswer << endl;
        answer = 0;
        score.streak = 0;
    }
    if (answer == 1){
        if (score.streak > 1) {
            points = 100 * score.streak;
        } else {
            points = 100;
        }
        if (userDifficulty == 'e' || userDifficulty == 'E') {
            score.cPoints += points;
            cout << "You earned " << points << " points." << endl;
        } else if (userDifficulty == 'i' || userDifficulty == 'I') {
            score.cPoints += (points * 1.5);
            cout << "You earned " << points << " points. " << endl;
        } else if (userDifficulty == 'h' || userDifficulty == 'H') {
            score.cPoints += (points * 2);
            cout << "You earned " << points << " points." << endl;
        }
        cout << "Current Score: " << score.cPoints << endl;
    } else{
        cout << "No Points Earned. Current Score: " << score.cPoints << endl;
    }
    return score;
}

