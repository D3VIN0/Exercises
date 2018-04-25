#include <iostream>
#include "Question.h"
using namespace std;

int main()
{
    Question q[5]; // array of objects
    int totalPoints = 0; // player's points
    for(int i=0;i<=4;i++) // loop of all question objects
    {
    q[i].q_number = i+1;
    q[i].getData();
    q[i].showQ();
    q[i].checkAnswer();
    totalPoints+=q[i].point;
    }



    cout << "END OF QUIZ... Your points: " <<totalPoints; //show total amount of points
    return 0;
}
