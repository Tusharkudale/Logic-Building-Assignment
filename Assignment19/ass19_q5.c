//Accept N number from user and accept another number as NO ,return the frequency of NO from it. 

#include<stdio.h>
#include<stdlib.h>   

int Frequency(int Arr[],int iLength,int iNo)
{   
    int iCnt = 0,iCount = 0;

    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iCnt = 0,iSize = 0,iRet = 0,iValue =0;
    int *p = NULL;

    printf("Enter number of elments:");
    scanf("%d", &iSize);

    printf("Enter NO:");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0;iCnt< iSize;iCnt++)
    {
        printf("Enter elements %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Frequency(p,iSize,iValue);

    printf("Result is:%d",iRet);

    free(p);
    return 0;
}