//To rearrange the elements of an array of N integers such that all even numbers are followed by all odd numbers
//LAB 1.3 27-07-23

#include <stdio.h>

int main(){
	int size_1512;
	int even_1512=0;
	int pos_1512=0;
	printf("Enter the size of array-\n");
	scanf("%d",&size_1512);
	int arr_1512[size_1512];
	printf("Enter the elements-\n");
	for (int i=0;i<size_1512;i++){
		scanf("%d",&arr_1512[i]);
		if (arr_1512[i]%2==0){
			even_1512++;
		}
	}
	for (int i=0;pos_1512!=even_1512;i++){
		if (arr_1512[i]%2==0){
			int temp1430=arr_1512[i];
			arr_1512[i]=arr_1512[pos_1512];
			arr_1512[pos_1512]=temp1430;
			pos_1512++;
		}
	}
	for (int i=0;i<size_1512;i++){
		printf("%d\t",arr_1512[i]);
	}
}