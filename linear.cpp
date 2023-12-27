#include<stdio.h>
#include<conio.h>
int main()
{
	int list[20],size ,i,selement;
	printf("enter size of the list");
	scanf("%d",&size);
	printf("enter any %d integer value",size);
	for(i=0;i<size;i++)
	scanf("%d",&list[i]);
	printf("enter element to be search");
	scanf("%d",&selement);
	for(i=0;i<size;i++)
	{
		if(selement==list[i])
		{
			printf("enter element is found at %d index",i);
			break;
		}
		if(i==size)
		printf("given element is not found in the list !!!");
		getch;
	}
}
