//Accept N number from user and display all such elements which are multiples of 11

#include<stdio.h>
#include<stdlib.h>

void Difference(int Arr[],int iLength)
{
    int iCnt = 0, iSum1 = 0,iSum2 = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("\nElement which are multiples of 11:%d\n",Arr[iCnt]);        
        }
    }    
    
}

int main()
{
    int iSize = 0,  iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));

    if( p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n\n",iSize);

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

     Difference(p,iSize);

    free(p);
    return 0;
}