#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char dtype[5];
	int rows,cols,row_index,col_index,R_M,C_M ;
	int size;
	int bytes;
	printf("Enter the data type:");
	scanf("%s",&dtype);
	printf("Enter the size:");
	scanf("%d",&size);
	printf("Enter no of bytes:");
	scanf("%d",&bytes);
	printf("Enter no of rows:");
	scanf("%d",&rows);
	printf("Enter no of columns:");
	scanf("%d",&cols);
	printf("Enter the row_index:");
	scanf("%d",&row_index);
	printf("Enter the col_index:");
	scanf("%d",&col_index);	
	R_M =(row_index * cols + col_index) * bytes;
	printf("Row Major is : %d \n", R_M );
	C_M =(col_index * rows + row_index) * bytes;
	printf("Column Major is : %d", C_M );
	
	return 0;
}
