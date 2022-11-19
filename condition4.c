/*
condition 4:
      ^
       \ 
        \
         \
          \
           \  
            \
*/
#include<stdio.h>
#include<stdbool.h>
void display(int x[4][4]);
bool isvalid(int x[4][4],int r,int c) //bool not any keyword in c.it present in bool.
{
	int i,j;
   	for(i=r,j=c;i>=0&&j>=0;i--,j--)
	{
		if(x[i][j])return false;
	}
	return true;
}
void display(int x[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d  ",x[i][j]);
		}
		printf("\n");
	}
		printf("\n\n");
}
void main()
{
	int x[4][4]={{0,0,0,0},		
				{0,0,0,0},		
				{0,0,0,0},		
				{0,0,0,0}		
   	            };
     display(x);
	 if(isvalid(x,3,3))
	 {
       		 x[3][3]=1;
	 }
     display(x);

}
