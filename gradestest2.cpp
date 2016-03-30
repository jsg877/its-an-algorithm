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

    cout << "Please enter your grade" << endl;  /** Printed out instructions to user */
    cin >> grade;                               /** input of grade*/

    while((grade=='A')||(grade=='a'))   /** loop for A*/
        {
            cout << "Great Job";        /** Printed feedback for student */
            break;                      /** ends loop */
        }
    while((grade=='B')||(grade=='b'))   /** Same steps in the A loop for B and C loops */
        {
            cout << "Good Job";
            break;

        }
    while((grade=='C')|(grade=='c'))
        {
            cout << "You Passed";
            break;
        }

    return 0;                           /** ends the program */
}
