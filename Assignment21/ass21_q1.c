//Accept N number from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iMax = 0,iCnt = 0;
    
    if((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid input");
        return -1;
    }

    iMax = Arr[0];
    
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0,iRet = 0,iValue = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of element:");
    scanf("%d",&iSize);


    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate the memory");
        return -1;
    }

    printf("Enter %d element:\n",iSize);
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter %d number:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p,iSize);

    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}