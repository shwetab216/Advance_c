#include<stdio.h>
int main()
{
	int no,pos;
	
	printf("Enter no and pos\n");
	scanf("%d %d",&no,&pos);
	
	no &= (~(1<<pos));

	printf("%d",no);

}
