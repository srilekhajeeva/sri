#include<stdio.h>
int main()
{
	int first,last,middle,size,i,selement,list[100];
	printf("enter size of the list");
	scanf("%d",&size);
	printf("enter %d integer value in ascending oder \n:",size);
	for(i=0;i<size;i++)
	scanf("%d",&list[i]);
	printf("enter value to search");
	scanf("%d",&selement);
	first =0;
	last =size-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(list[middle]<selement)
		first=middle+1;
		else if(list[middle]==selement)
		{
			printf("element found at index %d \n",middle);
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("no element found in the list");
	return 0;
}
