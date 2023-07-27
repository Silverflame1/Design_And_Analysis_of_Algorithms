/*To store random numbers into an array of N integers, where the array must contains some duplicates and then do the following:
a) Find out the total number of duplicate elements.
b) Find out the most repeating element in the array.*/
//Lab1.1 (27/07/2023)

#include <stdio.h>

int main(){
	int n_sm_1512;
	int d_sm_1512=0;
	int curr_sm_1512=0;
	int most_sm_1512=0;
	int max_sm_1512=0;
	printf("Enter the value of n greater than 10 for must having duplicate elements-\n");
	scanf("%d",&n_sm_1512);
	int arr_1512[n_sm_1512];
	int visit_1512[n_sm_1512];
	printf("The random array elements are as follows-\n");
	for (int i_sm_1512=0;i_sm_1512<n_sm_1512;i_sm_1512++){
		scanf("%d",&arr_1512[i_sm_1512]);
		visit_1512[i_sm_1512]=0;
	}
	for (int i_sm_1512=0;i_sm_1512<n_sm_1512-1;i_sm_1512++){
		curr_sm_1512=0;
		for (int j_sm_1512=i_sm_1512+1;j_sm_1512<n_sm_1512;j_sm_1512++){
			if (arr_1512[i_sm_1512]==arr_1512[j_sm_1512] && visit_1512[j_sm_1512]==0){
				d_sm_1512++;
				curr_sm_1512++;
				visit_1512[j_sm_1512]=1;
			}
		}
		if (max_sm_1512<curr_sm_1512){
			max_sm_1512 = curr_sm_1512;
			most_sm_1512 = arr_1512[i_sm_1512];
		}
	}
	printf("the total number of duplicate elements are %d\n",d_sm_1512);
	printf("the most frequent element is %d\n",most_sm_1512);
}
