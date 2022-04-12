/******************************************************************************
CS225 project
Contributors: Michael Perkins, Brian Bishop

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>

#include "Difficulty.h"
#include "Subject.h"
#include "Quiz.h"
#include "Questions.h"
#include "userNameInput.h"

using namespace std;
//classes will eventually be moved to a separate headerfile

int main()
{
    srand((unsigned int)time(NULL));
    string userName;
    string fileName = "playerData.txt";
    string player;
    string playerName;
    string playerScore;
    int fScore;
    vector<string> players({"null","null","null","null","null","null","null","null","null","null"});
    vector<int> scores({0,0,0,0,0,0,0,0,0,0});
    int attempt = 0;
    char userCharSubject;
    char userCharDifficulty;
    while (attempt == 0) {
        try {
            userName = userNameInput();
            attempt = 1;
        }
        catch (string MSG) {
            cout << "An error occured" << endl;
            cout << MSG << endl;
        }
    }
    cout << "welcome "<<userName << endl;

    cout << "Please select a subject: m(math), p(programming), h(history)" << endl;
    cin >> userCharSubject;

    while (userCharSubject != 'h' && userCharSubject != 'm' && userCharSubject != 'p') {
        cout << "Please select a subject: m(math), p(programming), h(history)" << endl;
        cin >> userCharSubject;
    }
    //actor,datatype,class
    Subject userSelectedSubject(userCharSubject); // subjects are math, programming, history
    cout << "Please select a difficulty: e(easy), i(intermediate), h(hard)" << endl;
    cin >> userCharDifficulty;

    while (userCharDifficulty != 'e' && userCharDifficulty != 'i' && userCharDifficulty != 'h') {
        cout << "Please select a subject: m(math), p(programming), h(history)" << endl;
        cin >> userCharSubject;
    }

    Difficulty userSelectedDifficulty(userCharDifficulty);
    Quiz userGeneratedQuiz(userCharSubject, userCharDifficulty);
    int score = userGeneratedQuiz.startQuiz();//beginning of game this is where the quizes will be stored in an array of quizzes
    cout<< "Congratulations " << userName <<"! you have completed the quiz. Your final score is: " << score << endl;
    ofstream pFile;
    pFile.open(fileName,ios_base::app);
    if(!pFile){
        cout<< "Couldn't open file."<<endl;
    }
    pFile <<userName<<": "<< score <<endl;
    pFile.close();
    cout<< "Here is where you rank against other players. "<< endl;
    ifstream pFile1;
    pFile1.open(fileName);
    if (!pFile1) {
        cout << "Couldn't open file." << endl;
    }
    while(!pFile1.eof()){
        getline(pFile1, player);
        size_t pos = player.find(" ");
        playerName = player.substr(0,4);
        playerScore = player.substr(pos+1,4);
        //cout<<playerName<<playerScore<< endl; //comment this out when it works
        if(playerScore.length() <=0){
            break;
        }
        fScore = stoi(playerScore);
        if (fScore> scores[0] || fScore == scores[0]){
            scores.emplace(scores.begin(),fScore);
            players.emplace(players.begin(), playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if((fScore>scores[1])||(fScore == scores[1])){
            scores.emplace(scores.begin()+1,fScore);
            players.emplace(players.begin()+1,playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if(fScore>scores[2]||fScore == scores[2]) {
            scores.emplace(scores.begin() + 2, fScore);
            players.emplace(players.begin() + 2, playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if(fScore>scores[3]||fScore == scores[3]){
            scores.emplace(scores.begin()+3,fScore);
            players.emplace(players.begin()+3,playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if(fScore>scores[4]||fScore == scores[4]){
            scores.emplace(scores.begin()+4,fScore);
            players.emplace(players.begin()+4,playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if(fScore>scores[5]||fScore == scores[5]){
            scores.emplace(scores.begin()+5,fScore);
            players.emplace(players.begin()+5,playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if(fScore>scores[6]||fScore == scores[6]){
            scores.emplace(scores.begin()+6,fScore);
            players.emplace(players.begin()+6,playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if(fScore>scores[7]||fScore == scores[7]){
            scores.emplace(scores.begin()+7,fScore);
            players.emplace(players.begin()+7,playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if(fScore>scores[8]||fScore == scores[8]){
            scores.emplace(scores.begin()+8,fScore);
            players.emplace(players.begin()+8,playerName);
            scores.resize(10);
            players.resize(10);
        }
        else if((fScore>scores[9])||(fScore == scores[9])){
            scores.emplace(scores.begin()+9,fScore);
            players.emplace(players.begin()+9,playerName);
            scores.resize(10);
            players.resize(10);
        }
    }
    pFile1.close();
    for (int x=0; x<10; x++){
        cout<< players[x]<<":"<<scores[x]<<endl;
    }
    return 0;

}
