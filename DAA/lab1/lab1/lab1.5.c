/*To take A an n*n square matrix array as an input and then WAP by
using appropriate user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/
//LAB 1.5 27-07-23

#include <stdio.h>

int main(){
	int arr_sm_1512[3][3];
	int nzero_sm_1512 = 0;
	int sum_sm_1512=0;
	int prod_sm_1512=1;
	printf("Enter the elements for 3*3 square matrix respectively-\n");
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&arr_sm_1512[i][j]);
		}
	}
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("%d\t",arr_sm_1512[i][j]);
			if (arr_sm_1512[i][j]!=0){
				nzero_sm_1512++;
			}
			if (j>i){
				sum_sm_1512+=arr_sm_1512[i][j];
			}
			if (i==j){
				prod_sm_1512*=arr_sm_1512[i][j];
			}
		}
		printf("\n");
	}
	printf("The number of non-zero elemets is %d\n",nzero_sm_1512);
	printf("The sum of elements above leading diagonal is %d\n",sum_sm_1512);
	printf("The elements above minor diagonal is as follows -\n");
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (i+j<2){
				printf("%d\t",arr_sm_1512[i][j]);
			}
		}
		printf("\n");
	}
	printf("The product of diagonal elements is %d\n",prod_sm_1512);
}
