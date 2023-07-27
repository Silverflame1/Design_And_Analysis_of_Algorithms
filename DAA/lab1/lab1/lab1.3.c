//To rearrange the elements of an array of N integers such that all even numbers are followed by all odd numbers
//LAB 1.3 27-07-23

#include <stdio.h>

int main(){
	int n_sm_1512;
	int even_sm_1512=0;
	int p_sm_1512=0;
	printf("Enter the size of array-\n");
	scanf("%d",&n_sm_1512);
	int arr_sm_1512[n_sm_1512];
	printf("Enter the elements-\n");
	for (int i_sm_1512=0;i_sm_1512<n_sm_1512;i_sm_1512++){
		scanf("%d",&arr_sm_1512[i_sm_1512]);
		if (arr_sm_1512[i_sm_1512]%2==0){
			even_sm_1512++;
		}
	}
	for (int i_sm_1512=0;p_sm_1512!=even_sm_1512;i_sm_1512++){
		if (arr_sm_1512[i_sm_1512]%2==0){
			int temp_sm_1512=arr_sm_1512[i_sm_1512];
			arr_sm_1512[i_sm_1512]=arr_sm_1512[p_sm_1512];
			arr_sm_1512[p_sm_1512]=temp_sm_1512;
			p_sm_1512++;
		}
	}
	for (int i_sm_1512=0;i_sm_1512<n_sm_1512;i_sm_1512++){
		printf("%d\t",arr_sm_1512[i_sm_1512]);
	}
}
