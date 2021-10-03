#include<stdio.h>

void display(int);

int main()
{
    int ivalue=0;
    
    printf("Enter number\n");
    scanf("%d",&ivalue);
    
    display(ivalue);
    
    return 0;
}

void display(int iNo)
{
    int idigit = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;
		iNo = iNo / 10;
		if(idigit==0)
		{
			printf("it contain zero\n");
		}
		else
		{
			printf("not zero\n");
		}
        
    }
  
}



