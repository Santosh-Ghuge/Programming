// Problem Statement : Accepts a Integer number and calculate its cube

// Step 1 : Understand the problem statement
// Conclusion : accepts integer number from user and calculate its cube


// Step 2 : Write a Algorithm

/*
    START:
            accept a integer number from user and store it into iNo
            create a variable as iAns to store result
            calculate cube using iNo*iNo*iNo
            Display tyhe result
    STOP:
*/

// Step 3 : We Choose C Programming Language to write the Program

// Step 4 : Write a Program using C Language

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name : CalculateCube
//      Description   : it is used to perform cube of a number
//      Input         : integer
//      Output        : integer
//      Author        : Santosh Dnyandev Ghuge
//      Date          : 03/10/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CalculateCube(int iValue)
{
    int iCube = 0;
    iCube = iValue * iValue * iValue;
    return iCube;

};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo = 0;
    long int iAns = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iAns = CalculateCube(iNo);

    printf("cube is %d", iAns);

    return 0;
}
// Step 5 : Test Case
/*
Test Case 1 :
            Input  : 6
            Output : 216

Test Case 2 :
            Input  : 3
            Output : 27

Test Case 3 :
            Input  : 87
            Output : 658503

Test Case 4 :
            Input  : 55
            Output : 166375

Test Case 5 :
            Input  : 77
            Output : 456533

*/
