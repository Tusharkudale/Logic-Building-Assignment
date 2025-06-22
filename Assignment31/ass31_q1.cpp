//Write a program which accept one number from user and off 7th bit of that number if it is ON.Returned modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue = 0,iLocation = 0,iRet = 0;

    cout<<"enter number: ";
    cin>>iValue;


    cout<<"enter location: ";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);

    cout<<"Updated number is: "<<iRet<<"\n";

    return 0;
}