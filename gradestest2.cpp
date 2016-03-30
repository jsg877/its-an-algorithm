/******************************************/
/** Tonya Lamb
/** CSC 110 Dr. Looms
/******************************************/



#include <iostream>         /**Header files for needed libraries*/
#include <iomanip>

using namespace std;        /** location of declarations */


int main ()                 /** CPU program call */
{
    char grade;              /** Character variable for grade */

    cout << "Please enter your grade and press enter" << endl;  /** Printed out instructions to user */
    cin >> grade;                               /** input of grade*/

    while ( (grade == 'a') || (grade == 'A') )   /** loop for A*/
        {
            cout << "Excellent";        /** Printed feedback for student */
            break;                      /** ends loop */
        }
    while ( (grade == 'b') || ( grade == 'B') )   /** Same steps in the A loop for B and C loops */
        {
            cout << "Great Job";
            break;
        }
    while ( (grade == 'c') || ( grade == 'C') )
        {
            cout << "You Passed";
            break;
        }

    return 0;                           /** ends the program */
}
