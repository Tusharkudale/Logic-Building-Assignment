//Write a program which accept one number from user and off 7th and 10th bit of that number it is ON.Returned modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    
    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iMask = iMask1 & iMask2;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue = 0,iLocation1 = 0,iRet = 0,iLocation2 = 0;

    cout<<"enter number: ";
    cin>>iValue;


    cout<<"enter first location: ";
    cin>>iLocation1;

    cout<<"enter second location: ";
    cin>>iLocation2;

    iRet = OffBit(iValue,iLocation1,iLocation2);

    cout<<"Updated number is: "<<iRet<<"\n";

    return 0;
}