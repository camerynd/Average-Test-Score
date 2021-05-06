/*
Chapter03_Q3.cpp
Duarte, Cameryn
CSC119.143 Introduction to Programming Spring 2021
02/11/2021
This program calculates the average of test scores
*/
#include <iostream>
#include <iomanip>//allows stream manipulators
using namespace std;
//function prototypes
void user_input (float& one, float& two, float& three,
float& four, float& five);
void average_calculation (float& one, float& two, float& three,
float& four, float& five, float& average);
void display_average (float& average);
//global constant
const int SCORE_NUMBER = 5;

int main()
{
    //declaring main function variables
    float scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive, average;

    cout << "This program displays the average of five ";
    cout << endl << "test scores." << endl << endl;
    //calling functions
    user_input(scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive);
    average_calculation(scoreOne, scoreTwo, scoreThree, scoreFour,scoreFive, average);
    display_average(average);

    return 0;
}
//input function
void user_input (float& one, float& two, float& three,
float& four, float& five)
{
    cout << "Please enter your first test score. ";
    cin >> one;
    cout << "Please enter your second test score. ";
    cin >> two;
    cout << "Please enter your third test score. ";
    cin >> three;
    cout << "Please enter your fourth score. ";
    cin >> four;
    cout << "Please enter your fifth score. ";
    cin >> five;
    cout << endl << endl;
}
//processing function
void average_calculation (float& one, float& two, float& three,
float& four, float& five, float& average)
{
    average = (one + two + three + four + five) / SCORE_NUMBER;
}
//output function
void display_average (float& average)
{
    cout << "Your average score is ";
    cout << setprecision(1) << fixed << average << "%";
    cout << endl << endl;
}