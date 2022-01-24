

#include<stdio.h>

#include<stdbool.h>

bool pallendrom(char *str)
{
	char *start=NULL;
	char *end=NULL;
	bool flag=true;
//	bool flag=true;
	
	start=str;
	end=str;
	while(end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
		
	{
		if(*start!=*end)
		{
		flag false;
		break;
		}
	
     	start++;
     	end--;
	}
	return flag;
}


int main()
{
	char arr[20];
	bool bret=false;
	
	printf("enter string \n");
	scanf("%[^'\n']s",arr);
	
	bret=pallendrom(arr);
	
	if(bret==true)
	{
		printf("number is pallindrom\n");
		
	}
	else
	{
		printf("number is not palindrom\n");
	}
	
	
	return 0;
}