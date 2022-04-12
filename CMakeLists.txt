cmake_minimum_required(VERSION 3.20)
project(untitled11)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled11 main.cpp Quiz.h Questions.h Difficulty.h Subject.h Quiz.cpp Difficulty.cpp Question.cpp Subject.cpp userNameInput.h userNameInput.cpp Score.h Score.cpp)
