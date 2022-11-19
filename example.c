#include<stdio.h>
int count=1;
int show()
{
	int i;
	for(i=1;i<4;i++)
	{
		printf("%d\n",i);
		if(count==i)
		{
			count++;
			if(show())
			{
	      	printf("ram\n");
			}
		}
	}
	return 1;
}
void main()
{
	show();
}