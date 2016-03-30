/*****************************************************/
/** Chessboard program
    This program prints a chessboard pattern that is
    built up from basic strings of white and black
    characters. **/
/*****************************************************/
#include <iostream>
#include <string>
using namespace std;

const string BLACK = "********";           /** Define black square line */
const string WHITE = "        ";           /** Define white square line */
int main()
{
    string whiteRow;                       /** A row beginning with a White square */
    string blackRow;                       /** A row beginning with a Black square */
    int loopCount;                         /** A loop counter */
    int loopCount2;                        /** Second loop counter */

   /**Create a white- black row by concatenating the basic strings
    whiteRow = WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK; */

   /** Create a black-white row by concatenating the basic strings
    blackRow = BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE; */

    loopCount = 0;         /** initializes outer loop counter */
    while (loopCount<4)    /** loop to print four copies of white-black/black-white */
    {
        loopCount2 = 0;         /** intializes inner loop counter */
        while (loopCount2 < 5)  /** loop to print five white-black rows */
        {
            cout << whiteRow << endl;  /** prints white row */
            loopCount2++;
        }
        loopCount2 = 0;         /** re-initializes inner loop counter */
        while (loopCount2 < 5)  /** loop to print five black-white rows */
        {
            cout << blackRow << endl;   /** prints black row */
            loopCount2++;
        }

        loopCount++;           /** adds one for each pass through the outer while loo; */
    }
    return 0;              /** ends program */
}
