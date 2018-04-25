#include <iostream>

using namespace std;

class Question
{
    public:
    string description; //question description
    string a,b,c,d; // answers
    int q_number; // number of question
    string correct; // corrent answer
    string answer; // user's answer
    int point; // point for question


    void getData(); // getting data from txt file
    void showQ(); // showing question and reading answer
    void checkAnswer(); // checking if answer is correct or not
};
