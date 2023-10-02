// Problem Statement : Accepts a number from user and check whether it is Even/Odd

// Step 1 : Understand the problem statement 
// Conclusion : accepts two integer number and check even or odd

// Step 2 : Write the Algorithm
/*
    START
        
        accepts a number from user
        divide a number by 2
        if remainder is 0 then number is even
        else number is odd 

    STOP
*/

// Step 3 : we using C programming Language for write a program

// Step 4 : Write a program using C Language

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name : CheckEven
//      Description   : Accepts A integer and checks whether it is odd or even
//      Input         : integer
//      Output        : integer
//      Author        : Santosh Dnynadev Ghuge
//      Date          : 03/10/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;
    auto bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    
    if (bRet == true)
    {
        printf("%d is even Number \n", iValue);
    }
    else 
    {
        printf("%d is odd Number \n", iValue);
    }


    return 0;
}


// Step 5 : Test Case
/*

Test Case 1 :
            input  : 5
            Output : 5 is Odd Number

Test Case 2 :
            Input  : 10
            Output : 10 is Even Number

Test Case 3 :
            Input  : 889
            Output : 889 is Odd Number

Test Case 4 :
            Input  : 9890
            Output : 9890 is Even Number

Test Case 5 :
            Input  : 77777
            Output : 77777 is Odd Number

*/