//Accept one number from user and accept one another number as NO, check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    
    if((Arr == NULL) || (iLength <= 0))
    {
        return FALSE;
    }

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
      if(iCnt == iLength)
        {
            return FALSE;
        }
        else
        {
            return TRUE;
        }
}

int main()
{
    int iSize = 0, iValue = 0,iCnt = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter number:");
    scanf("%d",&iValue);

    p =(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

        for(iCnt = 0;iCnt < iSize; iCnt++)
        {
            printf("Enter element %d\n",iCnt+1);
            scanf("%d",&p[iCnt]);
        }

        bRet = Check(p,iSize,iValue);

        if(bRet == TRUE)
        {
            printf("Number is present");
        }
        else
        {
            printf("Number is not present");
        }

        free(p);

        return 0;
}