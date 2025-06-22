//write a program which accept one number and position from user and off that bit.return modified number

#include<iostream>
using namespace std;

typedef unsigned int UINT;
typedef int BOOL;

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iResult = 0;
    UINT iMask = 1;
    
    iMask = iMask << (iPos -1);
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue = 0,iLocation = 0;
    int iRet = 0;

    cout<<"Enter Number:"<<"\n";
    cin>>iValue;

    cout<<"Enter location:"<<"\n";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);

    cout<<"updated number is :"<<iRet<<"\n";
    
    return 0;
}