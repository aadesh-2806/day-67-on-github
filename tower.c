#include<stdio.h>
void move(int n,int a,int b,int c)			// n: number of disks; a: source
{									// c: destination, b: intermediate	
	static int i=1;						// i: for printing step number
	if (n==1)
	{
		printf("%d. Move one disk from %d to %d\n",i,a,c);
		i++;
	}
	else
	{
		move(n-1,a,c,b);
		move(1,a,b,c);
		move(n-1,b,a,c);
	}
}
int main()
{
	int n;
	printf("how many disks to move :");
	scanf("%d",&n);
	move(n,1,2,3);
}
