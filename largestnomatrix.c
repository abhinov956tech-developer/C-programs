#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],i,j,row,col,large,small;
	printf("Enter the no of rows and col: ");
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the number: ");
			scanf("%d",&a[i][j]);
		}
	}
	large=small=a[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j>large])
			{
				large=a[i][j];		
			}
			else if(a[i][j]<small)
			{
				small=a[i][j];
			}
		}
	}
	printf("largest is %d",large);
	printf("\n smallest is %d",small);
	getch();
	return 0;
}
