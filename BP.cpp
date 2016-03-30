/*********************************************************
// Tonya Lamb
// CSC 110 Dr. Looms
// Exam 2 prep
/*********************************************************/


#include <iostream>   /**Header files for the libraries I am using */
#include <cmath>
using namespace std;  /** Allows access to where the libraries make the declarations**/

int main()            /** this is what the CPU calls to start the program    **/
{
float total;          /** declares a float variable total that will be the sum of all the BP **/
float thisBP;         /** declares a float variable thisBP for each individual BP entry **/


total = 0;                                              /** initializes total to zero **/
cout << "Enter a blood pressure (-1 to stop)" << endl;  /** prints out instructions to user **/
cin >> thisBP;

while(thisBP != -1)                                     /** loop for entering multiple BP's. Sentinel is set as -1 **/
{
total = total + thisBP;                                 /** running sum of BP's **/
cout << "Enter a blood pressure (-1 to stop)" << endl;  /** prints out instructions to user **/
cin >> thisBP;
}
cout << total << " is the total of the BP's entered.";  /** prints out the final total once loop is exited **/
return 0;           /** ends program **/
}


