/********************************************
*	DEVELOPER:	Ian Utnehmer
* COLLABORATORS: N/A
*	COURSE:	CS226 Discrete Structures
*	PROJECT:	1
*	LAST MODIFIED:	3/3/2024
********************************************/
/********************************************
*	<TITLE OF PROGRAM>
 *	Proposition Logic Operations
*********************************************
*	PROGRAM DESCRIPTION:
*	This program will take in two boolean values and
 *	perform the following operations on them:
 *	- Conjunction
 *	- Disjunction
 *	- Exclusive or
 *	- Conditional
 *	- Biconditional
 *	These operations will be output to the console.
*********************************************
*	FUNCTIONS:
*  - main
 *  No other functions required.
*********************************************/

/*********************************************
*	SETUP STATEMENTS and PURPOSE:
 *  N/A
*********************************************/
#include <iostream> //to output to console
using namespace std; //access namespace

//function prototypes
// N/A

/*********************************************
*	MAIN PROGRAM:
*********************************************/
int main()
{
  /* Given the truth values of the propositions p and q,
   * find the truth values of the conjunction, disjunction,
   * exclusive or, conditional statement, and biconditional
   * of these propositions.
   */

    bool p, q;

    // Input from user for p and q
    cout << "Enter 0 or 1 for p: ";
    cin >> p;
    cout << "Enter 0 or 1 for q: ";
    cin >> q;

    // Explain what conjunction, disjunction, exclusive or, conditional, and biconditional are
    cout << "Conjunction: p and q are both true" << endl
         << "Disjunction: p or q is true" << endl
         << "Exclusive or: p or q is true, but not both" << endl
         << "Conditional: if p is true, then q is true" << endl
         << "Biconditional: p and q are both true, or both false" << endl;

    cout << "\n\np = " << p << " q = " << q << endl
        << "Conjunction: " << (p && q) << endl
        << "Disjunction: " << (p || q) << endl
        << "Exclusive or: " << (p ^ q) << endl
        << "Conditional: " << (!p || q) << endl
        << "Biconditional: " << (p == q) << endl;
    return 0;
}

/*********************************************
*	FUNCTIONS:
*********************************************/
/**DESCRIPTION: <function description> */
//N/A
