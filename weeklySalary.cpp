//****************************************************************************
//Name: Tonya Lamb
//Date: 3/15/2016
//Version 1
//Program Name: Weekly Salary
//Program Description: Program calculates the user's weekly salary
//          based on their hourly wage and the number of hours they worked.
//****************************************************************************


//Preprocessor instructions

#include <iostream>             //for output and input
#include <cmath>                //for math operations
using namespace std;            //for library location of declarations

//CPU uses main to start the program

int main()
{

//Declarations of variables

	float hoursWorked;           //decimal variable for hours worked for the week
	float hourlyWage;            //decimal variable for wage per hour worked
	float hoursOvertime;         //decimal variable for hours over 40
	float weeklySalary;          //decimal variable for the salary earned for the 40 hour week
	float overtimeSalary;        //decimal variable for salary earned for hours over 40
	float totalSalary;           //decimal variable for total salary for the week

//Initialization of variables

    hoursWorked = 40.0;              //Initializes hours at the standard American work week
    hourlyWage = 7.25;               //Initializes hourly wage at VA minimum wage
    hoursOvertime = 0.0;             //Initializes overtime at 0

//Calling for input

    cout << "Please enter your hourly wage and hit enter." << endl;
    cin >> hourlyWage ;

    cout << "Please enter the number of hours you worked this week and hit enter." << endl;
    cin >> hoursWorked ;

//Calculations and print out of the answer

    if (hoursWorked <= 40)
    {
        weeklySalary = hoursWorked * hourlyWage;  //calculates weekly salary with no overtime

        cout << "Your Pay for this week is $" << weeklySalary << "." << endl;
        cout << "This Pay is based on " << hoursWorked << " hours worked at the  hourly salary of " << hourlyWage << "." << endl;
     }
    else
     {
        hoursOvertime = hoursWorked - 40;             //calculates how many hours over 40 were worked
        hoursWorked = hoursWorked - hoursOvertime;    //resets hoursWorked to 40

        overtimeSalary = hoursOvertime * (1.5 * hourlyWage);  //calculates overtime pay
        weeklySalary = hoursWorked * hourlyWage;             //calculates weekly salary for 40 hrs
        totalSalary = weeklySalary + overtimeSalary;         //calculates total pay for the week

        cout << "Your Regular Pay for this week is $" << weeklySalary << " and your Overtime Pay for this week is $" << overtimeSalary << "." << endl;
        cout << "This makes your total Pay $" << totalSalary << " for the week." << endl;
        cout << "This Pay is based on " << hoursWorked << " hours at your hourly salary of $" << hourlyWage << " and " << hoursOvertime << " hours worked at time and a half." << endl;
     }
     return 0;
}
