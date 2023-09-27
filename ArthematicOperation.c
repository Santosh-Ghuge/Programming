// Problem Statement : Accepts two Values from user and performs its addition , substraction , Division , Multiplication

// Step 1 : Understand the problem
// Conclusion : We have to accepts two values and performs add , sub , mult , divi etc

// Step 2 : Write The Algorithm
/*
    START :
        Accepts first value from user & store it into No1 , A , X , D
        Accepts second value from user & store it into No2 , B , Y , E
        create a variable to store the result named as Ans
        perform Addition of No1 & No2 store the result in Ans 
        perform Substraction of A & B store the result in Ans
        perform Multiplication of X & Y store the result in Ans
        perform Division of D & E store the result in Ans
        Display the result from Ans to the user

    STOP :
*/

// Step 3 : select the language (C\C++\Java)

// Step 4 : write the code

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      
//      Function        : Addition
//      Description     : it is use to Perform a Addition of two float number
//      Input Argument  : Float Float
//      Output Argument : Float
//      Author          : Santosh Dnyandev Ghuge
//      Date            : 27/09/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Addition( float fNo1 , float fNo2)
{
    float fSum = 0;                 // Variable To Store The Value Of Addition
    fSum = fNo1 + fNo2;
    return fSum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      
//      Function        : Substraction
//      Description     : it is use to Perform a Substraction of two float number
//      Input Argument  : Float Float
//      Output Argument : Float
//      Author          : Santosh Dnyandev Ghuge
//      Date            : 27/09/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Substraction(float fA , float fB)
{
    float fSub = 0;                 // Variable To Store The Value Of Substraction
    fSub = fA - fB;
    return fSub;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      
//      Function        : Multiplication
//      Description     : it is use to Perform a Multiplication of two float number
//      Input Argument  : Float Float
//      Output Argument : Float
//      Author          : Santosh Dnyandev Ghuge
//      Date            : 27/09/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Multiplication(float fX , float fY)
{
    float fMulti = 0;               // Variable to Store The Value Of Multiplication
    fMulti = fX * fY;
    return fMulti;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      
//      Function        : Division
//      Description     : it is use to Perform a Division of two float number
//      Input Argument  : Float Float
//      Output Argument : Float
//      Author          : Santosh Dnyandev Ghuge
//      Date            : 27/09/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Division(float fD , float fE )
{
    float fLove = 0;                // Variable To Store The Value Of Division
    fLove = fD / fE;
    return fLove; 
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point function of application which performs Addition , Substraction , Multiplication , Division
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0;          // Variable to Store First Input
    float fValue2 = 0;          // Variable to Store Second Input
    float fAns = 0;             // Variable to Store the Result

    printf("Enter The First Number :\n");
    scanf("%f", &fValue1);

    printf("Enter The Second Number :\n");
    scanf("%f", &fValue2);

    fAns = Addition( fValue1 , fValue2 );           // call to perform the addition
    printf("Addition is %f\n", fAns);

    fAns = Substraction( fValue1 , fValue2 );       // call to perform the substraction
    printf("Substraction is %f\n", fAns);

    fAns = Multiplication( fValue1 , fValue2 );     // call to perform the Multipliaction
    printf("Multiplication is %f\n", fAns);

    fAns = Division( fValue1 , fValue2 );           // call to Perform The Division
    printf("Division is %f\n", fAns);

    return 0;
}