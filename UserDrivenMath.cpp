//****************************************************************************
//Name: Tonya Lamb
//Date: 3/15/2016
//Version 3
//Program Name: UserDrivenMath
//Program Description: User inputs two variables and then decides what math operation to perform.
//****************************************************************************


//Preprocessor instructions

#include <iostream>             //for output and input
#include <cmath>                //for math operations
using namespace std;            //for library location of declarations

//CPU uses main to start the program

int main()
{
//Declarations of variables

	float num1;                 //decimal variable for the first number the user enters
	float num2;                 //decimal variable for the second number the user enters
	float calcNum;              //decimal variable for the answer
	char choice;                //character for the math operation chosen by the user

//Initialization of variables

    num1 = 1.0;                 //initial values of first and second number are set to 1.0
    num2 = 1.0;


//Explaining the purpose of the program to the user

    cout << "This program asks you for two numbers and then will ask you to choose what arithmetic operation you want to compute." << endl;

//Asking for user to input the first number
    cout << "Please enter a number and hit enter." << endl;
    cin>> num1;

        //validating the first entry
        while (cin.fail())    //keeps the loop going as long as the user fails to enter a number
        {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "I'm sorry you didn't enter a number, please try again. Then hit enter." << endl;
        cin >> num1;
        }

//Asking the user to input the second number

    cout << "Please enter a second number and hit enter." << endl;
    cin >> num2;

        //validating the second entry
        while (cin.fail())    //keeps the loop going as long as the user fails to enter a number
        {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "I'm sorry you didn't enter a number, please try again. Then hit enter." << endl;
        cin >> num2;
        }

//Asking the user to choose the operation

    cout << "Please enter only one uncapitalized letter: a for addition, s for subtraction, m for multiplication and d for division. Then hit enter." << endl;
    cin >> choice;

        //Asks for another entry if the user doesn't enter a,s,m or d using a loop
        while  (!((choice == 'a') || (choice == 's') || (choice == 'm') || (choice == 'd')))
        {
        cout <<  "Incorrect entry, please try again. Please enter a, s, m, or d and hit enter." << endl;
        cin >> choice;
        }


    //if else statements to perform calculation based the letter entered by the use
    if (choice == 'a')              //calculates addition for a
       {
           calcNum = num1 + num2;
       }
    else if (choice == 's')          //calculates subtraction for s
       {
           calcNum = num1 - num2;
       }
    else if (choice == 'm')          //calculates multiplication for m
       {
           calcNum = num1 * num2;
       }
    else if (choice == 'd')     //calculates division for d
       {
           calcNum = num1 / num2;
       }

cout << "The result is " << calcNum;


return 0;

}

