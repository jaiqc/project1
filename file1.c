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
	printf("add line 1");
	
	unsigned int a;
            a=new.id*250;
          while(a--)
	{
		printf("%d\n",a);
	}
            return 0;
}
