//Accept N number from user check whether that number contains 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
        
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0,iCnt = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if( p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iLength );

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iLength);

    if( bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;

}