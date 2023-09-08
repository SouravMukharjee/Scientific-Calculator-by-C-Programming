#include <stdio.h>

int main()
{
    int hex[1000], i=1, j=0, rem, dec = 0, bin;

    printf("Enter a Binary Number: ");
    scanf("%d",&bin);

    while(bin>0)
    {
        rem = bin % 2;
        dec = dec + (rem*i);
        i = i * 2;
        bin = bin / 10;
    }
    i = 0;
    while(dec!=0)
    {
       hex[i] = dec % 16;
       dec = dec/16;
       i++;
    }

    printf("Equivalent HexaDecimal value: ");
    for(j=i-1;j>=0;j--)
     {
        if(hex[j]>9)
            printf("A");
        else if(hex[j]>10)
            printf("B");
        else if(hex[j]>11)
            printf("C");
        else if(hex[j]>12)
            printf("D");
        else if(hex[j]>13)
            printf("E");
        else if(hex[j]>14)
            printf("F");

        else
            printf("%d",hex[j]);
    }
    return 0;
}

