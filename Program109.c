#include <stdio.h>

void DisplayTable()
{
    int i = 0;
    
    printf("ASCII table is \n");
    printf("***************************************\n");
    printf("Characte\tDecimal\tHexadecimal\tOctal\n");
    printf("***************************************\n");
    for(i= 0; i <=255; i++)
    {
        printf("%c\t%d  \t  %x  \t  %o \n",i,i,i,i);
    }   
    printf("***************************************\n");
}

int main()
{
    DisplayTable();
    
    return 0;
}
