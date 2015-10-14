#include <stdio.h>
#include <string.h>

struct student 
{
            int id;
            
};

struct student new={
		
		.id=0,
};


int main() 
{
	unsigned int a;
            a=new.id*250;
          while(a--)
	{
		printf("%d\n",a);
	}
printf("Hello World");
            return 0;
}
