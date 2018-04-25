#include "Question.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void Question::getData()
{
    fstream file;
    file.open("quiz.txt",ios::in); // open quiz.txt file

    if(file.good()==false)
    {
        cout << "Cannot read data file!";
        exit(0); // if cannot read file then exit program
    }
    int line_nr =(q_number - 1)*6 + 1;
    int act_nr = 1;
    string line;

    while(getline(file,line))
    {
        if(act_nr==line_nr) description=line;
        if(act_nr==line_nr+1) a=line;
        if(act_nr==line_nr+2) b=line;
        if(act_nr==line_nr+3) c=line;
        if(act_nr==line_nr+4) d=line;
        if(act_nr==line_nr+5) correct   =line;
        act_nr++;
    }
    file.close();
}

void Question::showQ()
{
    cout << endl << description << endl;
    cout << "a) " << a << endl;
    cout << "b) " << b << endl;
    cout << "c) " << c << endl;
    cout << "d) " << d << endl;
    cout << "-------------------------------" << endl;
    cout << endl << "Your answer: ";
    cin >> answer;
}

void Question::checkAnswer()
{
    if(answer==correct)
    {
        point = 1;
    }else
    {
        point = 0;
    }
}
