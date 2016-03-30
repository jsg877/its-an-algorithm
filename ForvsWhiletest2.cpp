/******************************************/
/** Tonya Lamb
/** CSC 110 Dr. Looms
/******************************************/



#include <iostream>         /**Header files for needed libraries*/
#include <iomanip>

using namespace std;        /** location of declarations */


int main ()                 /** CPU program call */
{
    int i = 0;              /** declaration and initialization of counter i */

    cout << "This is the output from my while loop." << endl; /** information for user */
    while ( i <= 13)        /** shows structure of a while loop */
        {
          cout << i << " x " << i << " = " << i*i << endl;
          i++;
        }


    cout << "This is the output from my for loop." << endl; /** information for user */
    for ( int i = 0; i <= 13; i++)  /** shows structure of a for loop */
        {
          cout << i << " x " << i << " = " << i*i << endl;

        }


 return 0;    /**ends program */
 }
