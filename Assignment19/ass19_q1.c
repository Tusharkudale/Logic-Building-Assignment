//Accept N from user and return frequency of even Elements 

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = 0 ; iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iCnt = 0,iRet = 0 ,iLength = 0;
    int *p = NULL;

    printf("Enter number of Elements:\n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("\nEnter %d element:\n",iLength);
    
        for(iCnt = 0;iCnt < iLength; iCnt++)
        {
            printf("Enter element  %d\n",iCnt+1);
            scanf("%d",&p[iCnt]);
        }

        iRet = CountEven(p,iLength);

        printf("Result is: %d",iRet);

        free(p);

        return 0;
    
    
}