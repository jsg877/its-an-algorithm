//************************************************************************************************
// Name: It's an Algorithm
// Group Project CS110 Prof Looms Tidewater Community College
// Date: 3_22_2016
// Version: 12
// Program Name: FactFun
// Program Description: Helps students practice multiplication facts
//************************************************************************************************


// Directions to the preprocessor

#include <cmath>                   // Library for the math functions
#include <iostream>                // Library for cout, cin
#include <stdlib.h>                // Library for
#include <time.h>                  // Library allows access to random functions
#include <limits>                  // Library for
#include <string>                  // Library for string and getline

using namespace std;               // Allows access to where the libraries make the declarations

// getInt is a function that validates that what is entered for guess is a number

 int getInt()                     
	{
	int guess=0;

	while (!(cin >> guess))
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "You must enter a number. Please try again." << endl;
		}
	return (guess);
	}



// int main is the function that the CPU will call to start the program

	int main ()
{

// Declarations of the variables
	  string again;                 // again is a character
	  int a;                        // a is the first integer for the math problem
  	int b;                        // b is the second integer for the math problem
	  int answer;                   // answer will be the computer programs solution and will be an integer
    const string stry = "y";      // constant strings that are used to validate y or n input
    const string strY = "Y";
    const string strn = "n";
    const string strN = "N";


  cout << "Welcome to FactFun Math Trainer" << endl;
  cout << "Each time you solve a problem or answer a question please press the Enter key when you are done." << endl;

	again = 'y';                   // initializes the value of the variable again as 'Y'


	while ((again == stry) || (again == strY)) // This loop keeps the program generating problems if the student replies with a y or Y
	{
		srand ( time(NULL) );               // random number generator. produces 0-12
		a = rand() % 13;                    // limits both a and b variable to be less than 13
		b = rand() % 13;
        answer = a * b;                 // calculates the correct answer

		cout << "Solve the equation " << a << " x " << b << " = " ;   // displays a problem

        int guess = getInt();

        while (answer != guess)    // this loop lets the student keep trying until they get the problem correct
            {

			cout << "Incorrect. Please try again" << endl;
			cout << "Solve the equation " << a << " x " << b << " = ";
            cin >> guess;

            }

		if (answer == guess)           // asks the student if they want another problem
            {
            cin.clear();
            cin.ignore(100,'\n');
			cout << "Correct. Would you like to try another problem? Please enter y or n." << endl;
			getline(cin, again);
            }

                                                           //Loop that prevents wrong input for the y/n question
                                                           
    while((again != stry) && (again != strY) && (again != strn) && (again != strN)) 
      {
                                                          // Offers student a chance to enter y or n correctly
       cout << "You did not enter y or n. Please type y or n and hit the Enter key." << endl;    
       getline(cin,again);
      }

    if ((again == strn) || (again == strN))                  //These two lines print out comments when the user is done.
       cout << "Thank you for using FactFun Trainer. Please come back soon.";

  }


return 0;
}



