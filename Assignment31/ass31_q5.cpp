//Write a program which accept one number from user and on its first 4 bits.Return modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 15;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    int iValue = 0,iLocation = 0,iRet = 0;

    cout<<"enter number: ";
    cin>>iValue;


    /*cout<<"enter location: ";
    cin>>iLocation;*/

    iRet = OnBit(iValue);

    cout<<"Updated number is: "<<iRet<<"\n";

    return 0;
}