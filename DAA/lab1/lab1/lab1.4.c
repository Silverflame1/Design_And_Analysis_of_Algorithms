//To take three variable (a, b, c) as separate parameters and swap the values stored so that value a goes to b, b to c and c to a by using a SWAP(x,y) function that swaps/exchanges the numbers x & y.
//LAB 1.4 27-07-23

#include <stdio.h>

void swap(int *x_sm_1512,int *y_sm_1512){
	int temp_sm_1512 = *x_sm_1512;
	*x_sm_1512 = *y_sm_1512;
	*y_sm_1512 = temp_sm_1512;
}

int main (){
	int a_sm_1512;
	int b_sm_1512;
	int c_sm_1512;
	printf("Enter three numbers-\n");
	scanf("%d%d%d",&a_sm_1512,&b_sm_1512,&c_sm_1512);
	printf("Before swapping\n%d %d %d\n",a_sm_1512,b_sm_1512,c_sm_1512);
	swap(&a_sm_1512,&b_sm_1512);
	swap(&a_sm_1512,&c_sm_1512);
	printf("After swapping\n%d %d %d\n",a_sm_1512,b_sm_1512,c_sm_1512);
}
