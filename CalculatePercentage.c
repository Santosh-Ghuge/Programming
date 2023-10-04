// Problem Statement : Accepts marks as input from user and calculate its perccentage 

// Step 1 : Understand the Problem Statement
// Conclusion : Accepts Marks as input and give Percentage As Output

// Step 2 : Write A Algorithm for Problem
/*
    
    START
            accept marks from user and store it into integer iValue
            accept total marks from user and store it into integer iTotal
            create float Variable as fRet to store the result
            calculate Percentage (iValue/iTotal)*100
            Display The Result
    STOP

*/

// Step 3 : Use C programming Language to write a Program

// Step 4 : write A Program

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name   : CalculatePercentage
//      Description     : It used to perform Percentage Calculation
//      Input           : Integer
//      Output          : Float
//      Author          : Santosh Dnyandev Ghuge
//      Date            : 04/10/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

float CalculatePercentage (int iNo , int iAns)          // function to Perform Calculation
{
    float fPercentage = 0.0f;                          // Variable to store Calculation
    fPercentage = (((float) iNo / (float) iAns)*100 );
    return fPercentage;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;            // variable to store marks
    auto int iTotal = 0;            // Variable to store total marks

    auto float fRet = 0.0f;         // Variable to store result

    printf("Enter the Marks :\n");
    scanf("%d", &iValue);

    printf("Enter the Total Marks :\n");
    scanf("%d", &iTotal);

    fRet = CalculatePercentage (iValue , iTotal);               // Call the function to perform task

    printf("Percentage is %f\n", fRet); 

    return 0;
}

// Step 5 : Test Case
/*
    Test Case 1 :
                 Input  : 10 100
                 Output : Percentage is 10

    Test Case 2 :
                 Input  : 55 66
                 Output : Percentage is 83.333336

    Test Case 3 :
                 Input  : 77 90
                 Output : Percentage is 85.555557

    Test Case 4 :
                 Input  : 150 200
                 Output : Percentage is 75

    Test Case 5 :
                 Input  : 56 78
                 Output : Percentage is 71.794868

*/