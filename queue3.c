#include<stdio.h>
#define N 5
void initq(int *f,int *r) 
{
	*f=0; 
	*r=0;
} 
void enterq(int *a,int x,int *r)
{
	a[*r]=x;
	*r=(*r+1)%N;
}
void deleteq(int *a,int *x,int *f)
{
	*x=a[*f];
	*f=(*f+1)%N;
}
int emptyq(int f,int r)
{
	if (f==r)
	return 1;
	else 
    return 0;
}
int fullq(int f,int r)
{
	if ((r+1)%N==f)
	return 1;
	else
	return 0;
}
int main()
{
  	int a[N];
  	int front,rear;
	int choice,v,i;
	initq(&front,&rear);
	do{
		printf("1. Enter a value in queue\n");
		printf("2. Delete a value from queue\n");
		printf("3. Print queue values\n");
		printf("4. EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
				printf("Give value to enter: ");
				scanf("%d",&v);
				if (fullq(front,rear)==0)
				enterq(a,v,&rear);
				else
				printf("queue full, cannot enter\n");
				break;
		case 2:
				if (emptyq(front,rear)==0)
				{
					deleteq(a,&v,&front);
					printf("delete queue element :%d\n",v);
				}
				else
				printf("queue empty, cannot delete\n");
				break;
		case 3:
				printf("queue values are : ");
				i=front;
				while(i!=rear)
				{
					printf("%d. %d,",i,a[i]);
					i=(i+1)%N;
				}
				printf("\n");
				printf("current front= %d, current rear= %d\n",front,rear);
				break;
		case 4:
				printf("Thank you, BYE\n");
				break;
		default:
				printf("invalid choice, enter again\n");
		}
	} while(choice!=4);	
}
