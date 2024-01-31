#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3],add[3][3],i,j,row1,col1,row2,col2;
	printf("Enter no of row1 and col1: \n");
	scanf("%d %d",&row1,&col1);
	printf("Enter no of row2 and col2: \n");
	scanf("%d %d",&row2,&col2);
	for(i=0;i<row1;i++)
 {
		for(j=0;j<col1;j++)
	{
	  printf("Enter the elements of matrix1: ",i,j);
	  scanf("%d",&mat1[i][j]);
    }
 }
 for(i=0;i<row2;i++)
{
	for(j=0;j<col2;j++)
	{
		printf("Enter the elements of matrix2: ",i,j);
		scanf("%d",&mat2[i][j]);
	}
}
for(i=0;i<row1;i++)
{
	for(j=0;j<row2;j++)
	{
		add[i][j]=mat1[i][j]+mat2[i][j];
	//	scanf("%d+%d=%d",mat1[i][j])
	}
}
printf("The addition of matrix is \n");
 for(i=0;i<row1;i++)
{
	for(j=0;j<col1;j++)
	{
		printf("%d ",add[i][j]);
	}
	printf("\n");
}
return 0;

	
}
