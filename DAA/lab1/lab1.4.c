//To take three variable (a, b, c) as separate parameters and swap the values stored so that value a goes to b, b to c and c to a by using a SWAP(x,y) function that swaps/exchanges the numbers x & y.
//LAB 1.4 27-07-23

#include <stdio.h>

void swap(int *x_1512,int *y_1512){
	int temp1430 = *x_1512;
	*x_1512 = *y_1512;
	*y_1512 = temp1430;
}

int main (){
	int a_1512;
	int b_1512;
	int c_1512;
	printf("Enter three numbers-\n");
	scanf("%d%d%d",&a_1512,&b_1512,&c_1512);
	printf("Before swapping\n%d\t%d\t%d\n",a_1512,b_1512,c_1512);
	swap(&a_1512,&b_1512);
	swap(&a_1512,&c_1512);
	printf("After swapping\n%d\t%d\t%d\n",a_1512,b_1512,c_1512);
}