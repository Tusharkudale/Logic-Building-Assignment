//write a program which accept one number and position from user and check whether bit at that position is ON or OFF.
//If bit is ON return TRUE otherwise return FALSE

#include<iostream>
using namespace std;

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo,UINT iPos)
{
    UINT iResult = 0;
    UINT iMask = 1;
    
    iMask = iMask << (iPos -1);
    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    int iValue = 0,iLocation = 0;
    BOOL bRet = false;

    cout<<"Enter Number:"<<"\n";
    cin>>iValue;

    cout<<"Enter location:"<<"\n";
    cin>>iLocation;

    bRet = ChkBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"bit is ON at location "<<iLocation<<"\n";
    }
    else
    {
        cout<<"bit is OFF at location "<<iLocation<<"\n";
    }

    return 0;
}