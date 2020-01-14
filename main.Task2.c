#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int rows,cols,i,j;	
	printf("Enter total no of rows:");
	scanf("%d", &rows);
	printf("Enter total no of columns:");
	scanf("%d", &cols);
	int arr1[rows][cols],arr2[rows][cols],sum[rows][cols];	
	printf("Enter the first matrix:\n");
	
		for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)	
		{
			
			printf("Enter element m%d%d ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	
	printf("Enter the second matrix:\n");
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
		{
		
		
			printf("Enter element m%d%d ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
	    }
	printf("The sum of two matrix:\n");
	
	for(i=0;i<rows;i++)
	{	
		for(j=0;j<cols;j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d \t ",sum[i][j]);
			
	    }
	printf("\n");
   }
		
	return 0;
}
