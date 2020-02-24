#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int fnDifferBy1(int n)
{
    unsigned int x=0,y=0,iLen2=0,iSubsNo=0;
    int iDiff=0;

    if (strlen(n) == 1)
        iSubsNo = n;
    else
    {
        iLen2 = strlen(n);
        memcpy(x,(char *)&n,1);
        memcpy(y,(char *)&n+1,1);

        iDiff = y - x;
        iDiff = abs(iDiff);

        if (iDiff == 1)
            iSubsNo = n;
    }
    return iSubsNo;
}

int main ()
{
    unsigned int result=0,iLen=0,iSubsNo=0;
    char caOutput[5];
    int i=0,number=0;

    printf("Enter a number : \n");
    gets(number);

    while (i<number)
    {
        result = fnDifferBy1(i);
        iLen = strlen(result);
        strcpy(caOutput+iLen, (char *)&result);
        iLen += 1;
        i++;    
    }

    printf("Input : %d /n Output : %s /n", number,caOutput);
    return 0;
}

