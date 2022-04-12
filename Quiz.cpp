//
// Created by deade on 4/7/2022.
//
#include "Quiz.h"
#include "Questions.h"
#include "Score.h"

Quiz::Quiz(char userSubject, char userDifficulty) { chosenDifficulty = userDifficulty, chosenSubject = userSubject; }

int Quiz::startQuiz() {
    char subject = chosenSubject;
    char difficulty = chosenDifficulty;
    Score score;
    Question questions[5];
    if (subject == 'h' && difficulty == 'e'){
        questions[0].setQuestion("On what holiday did George Washington attack Trenton?",
                                 "Christmas", "Easter", "Thanksgiving", "Arbor Day", "Christmas");
        questions[1].setQuestion("How many spartans were at Thermopalyae?",
                                 "300", "500", "600", "270", "300");
        questions[2].setQuestion("What day were the D-Day Landings?",
                                 "4 July 1944", "7 June 1944", "6 June 1944", "6 June 1943", "6 June 1944");
        questions[3].setQuestion("Who was the first joint ruler of England and Scotland",
                                 "Queen Elizabeth II", "King James I", "King Robert I", "Queen Mary III", "King James I");
        questions[4].setQuestion("Who is credited with ending the Great Depression?",
                                 "President Franklin Roosevelt", "President Herbert Hoover", "Robert Higgs", "Hawley Smoot", "President Franklin Roosevelt");
    } else if (subject == 'h' && difficulty == 'i'){
        questions[0].setQuestion("Which of the following was NOT a historical Olympic Sport?",
                                 "Armored Combat", "Tug-of-War", "Crouquet", "Fine Arts", "Armored Combat");
        questions[1].setQuestion("Napolean Bonaparte fought a war against what animal?",
                                 "Wolves", "Bunnies", "Emus", "Bears", "Bunnies");
        questions[2].setQuestion("Who invented gunpowder?",
                                 "China", "England", "Egypt", "France", "China");
        questions[3].setQuestion("What US President was considered a wrestling champ, who only lost 1 match out of 300",
                                 "Theodore Roosevelt", "Abraham Lincoln", "Dewight Eisenhower", "Donald Trump", "Abraham Lincoln");
        questions[4].setQuestion("How many people died in the Great Fire of London",
                                 "6","13000","150","700","6");
    } else if (subject == 'h' && difficulty == 'h'){
        questions[0].setQuestion("What Roman Emperor attempted to appoint his horse to the Senate?",
                                 "Nero", "Caligula", "Constantine", "Caracalla", "Caligula");
        questions[1].setQuestion("What was the name of the giant trebuchet build by King Edward I of England?",
                                 "Dragon's Fangs", "Wall Breaker", "War Wolf", "It had no name", "War Wolf");
        questions[2].setQuestion("Who invented the flamethrower and when was it invented?",
                                 "Germany 1896", "Greece 672", "England 1645", "China 1247", "Greece 672");
        questions[3].setQuestion("What method did ancient celts use to offer human sacrifices to their gods?",
                                 "Burnt alive in a  wooden man", "Alter sacrifice", "Feed to the wolves", "Drowned in a lake to satiate the spirits", "Burnt alive in a  wooden man");
        questions[4].setQuestion("What substance did Roman's like to dissolve into their drinks, which lead to lunancy and the fall of Rome?",
                                 "Cocaine", "Lead", "Opium", "Ash", "Lead");
    } else if (subject == 'm' && difficulty == 'e'){
        questions[0].setQuestion("", "", "", "", "", "");
        questions[1].setQuestion("", "", "", "", "", "");
        questions[2].setQuestion("", "", "", "", "", "");
        questions[3].setQuestion("", "", "", "", "", "");
        questions[4].setQuestion("", "", "", "", "", "");
    } else if (subject == 'm' && difficulty == 'i'){
        questions[0].setQuestion("", "", "", "", "", "");
        questions[1].setQuestion("", "", "", "", "", "");
        questions[2].setQuestion("", "", "", "", "", "");
        questions[3].setQuestion("", "", "", "", "", "");
        questions[4].setQuestion("", "", "", "", "", "");
    } else if (subject == 'm' && difficulty == 'h'){
        questions[0].setQuestion("", "", "", "", "", "");
        questions[1].setQuestion("", "", "", "", "", "");
        questions[2].setQuestion("", "", "", "", "", "");
        questions[3].setQuestion("", "", "", "", "", "");
        questions[4].setQuestion("", "", "", "", "", "");
    } else if (subject == 'p' && difficulty == 'e'){
        questions[0].setQuestion("", "", "", "", "", "");
        questions[1].setQuestion("", "", "", "", "", "");
        questions[2].setQuestion("", "", "", "", "", "");
        questions[3].setQuestion("", "", "", "", "", "");
        questions[4].setQuestion("", "", "", "", "", "");
    } else if (subject == 'p' && difficulty =='i'){
        questions[0].setQuestion("", "", "", "", "", "");
        questions[1].setQuestion("", "", "", "", "", "");
        questions[2].setQuestion("", "", "", "", "", "");
        questions[3].setQuestion("", "", "", "", "", "");
        questions[4].setQuestion("", "", "", "", "", "");
    } else if (subject == 'p' && difficulty == 'h'){
        questions[0].setQuestion("Given the In-order traversal of the Pre-order traversal: MFAICXQVZ",
                                 "MAFCIQXZV", "ZXVQMICFA", "AFCIMQVXZ", "ACIFVQZXM", "AFCIMQVXZ");
        questions[1].setQuestion("What is the maximum number of nodes in a binary tree of height 9?",
                                 "2148", "1023", "123", "1024", "1023");
        questions[2].setQuestion("What is the ""big end up heap"" property?", //finish this one later
                                 "", "The parent node has a larger value than the child node", "", "", "The parent node has a larger value than the child node");
        questions[3].setQuestion("What shape constraint must a heap satisfy?",
                                 "The parent node has to be larger than the child node", "Perfect", "HB(1)", "Almost Perfect", "Almost perfect");
        questions[4].setQuestion("How many nodes are there at level 6 in a perfect binary tree of height 8?",
                                 "63", "88", "126", "64", "64");
    } else {
        cout << "invalid selection. No test could be generated" << endl;
    }

    for (int x = 0; x < 5; x++){
        score = questions[x].playQuestion(score, difficulty); //This line is giving me a headache
    }

    return score.cPoints;
}
