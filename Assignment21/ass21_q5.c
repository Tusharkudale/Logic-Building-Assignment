//Accept N number from user and Display summation of digit of each number

#include<stdio.h>
#include<stdlib.h>

void SumDigits(int Arr[],int iLength)
{
    int iCnt = 0,iDigit = 0,iSum = 0;

        for(iCnt = 0;iCnt < iLength; iCnt++)
        {
            while(Arr[iCnt] != 0)
            {
                iDigit= Arr[iCnt] % 10;
                iSum = iSum + iDigit;
                Arr[iCnt] = Arr[iCnt] / 10;                
            }
        printf("%d\t",iSum);
        iSum = 0;
        }
    
}
int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter  %d Elements:\n",iSize);

    for(iCnt = 0 ;iCnt < iSize;iCnt++)
    {
        printf("Enter number %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    SumDigits(p,iSize);

     free(p);

    return 0;
}