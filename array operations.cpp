#include<stdio.h>
int main()
{
	int arr[100];
	int n;
	int i,o,j;
	int a,a1,b,c,c1;
	printf("enter size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
{
   printf("\n1.traverse \n2.insert \n3.delete \n4.update \n5.exit");
while(0!=5)
  {
     printf("enter your choice");
	 scanf("%d",&o);
	 switch();
	 {
	   case 1:
	    for(i=0;i<n;i++)
		{
		 pritnf("%d",&arr[i]);
		}	
		break;
		case 2:
			printf("enter index element to insert");
			scanf("%d%d",&a,&a1);
			for(i=n-1;i>=a;i--)
			{
				arr[i]=arr[i-1];
			}
			arr[i]=a1;
			for(i=0;i<n;i++)
			{
				printf("%d",arr[i])
			}
			break;
			case 3:
				printf("enter the index element to be deleted");
				scanf("%d",&b)
				for(i=b;i<n;i++)
				{
					arr[i]=arr[i+1]				
				}
				for(i=0;i<n;i++)
				{
					printf("%d",arr[i]);
				}
				n=n-1;
				break;
				case 4:
					printf("enter index element updated");
					scanf("%d%d",&c,&c1);
					arr[c]=c1;
					for(i=0;i<n;i++)
					{
						print("%d",arr[i]);
					}
					break;
					case 5:
						return 0;
			
     }	
   }   
	
}
