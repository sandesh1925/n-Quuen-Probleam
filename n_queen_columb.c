/*
condition 1,2,3,4:
     4^      2^      3^   
       \      |      /    
        \     |     /   
         \    |    /
          \   |   /
           \  |  /
            \ | /
 <----------- *            
 1
 */
#include<stdio.h>
#include<stdbool.h>
void display(int x[4][4]);
bool isvalid(int x[4][4],int r,int c) //bool not any keyword in c.it present in bool.
{
	int i,j;
    for(j=c;j>=0;j--)
	{
		if(x[r][j])return false;
	} 
    for(i=r;i>=0;i--)
	{
		if(x[i][c])return false;
	}
	for(i=r,j=c;i>=0&&j<4;i--,j++)
	{
		if(x[i][j])return false;
	}
    for(i=r,j=c;i>=0&&j>=0;i--,j--)
	{
		if(x[i][j])return false;
	}
	return true;
}
bool check(int x[4][4],int c)
{
	int i;
	if(c==4)return true;
	for(i=0;i<4;i++)
	{
		if(isvalid(x,i,c))
		{
			x[i][c]=1;
			if(check(x,c+1))return true;
			x[i][c]=0;
		}	
	}
	return false;
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
	 check(x,0);
     display(x);

}
