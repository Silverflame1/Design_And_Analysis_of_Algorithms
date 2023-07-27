/*To store random numbers into an array of N integers, where the array must contains some duplicates and then do the following:
a) Find out the total number of duplicate elements.
b) Find out the most repeating element in the array.*/
//Lab1.1 (27/07/2023)

#include <stdio.h>

int main(){
	int n_1512;
	int dup_1512=0;
	int curr_1512=0;
	int most_1512=0;
	int maxfreq_1512=0;
	printf("Enter the value of n greater than 10 for must having duplicate elements-\n");
	scanf("%d",&n_1512);
	int arr_1512[n_1512];
	int visit_1512[n_1512];
	printf("The random array elements are as follows-\n");
	for (int i=0;i<n_1512;i++){
		scanf("%d",&arr_1512[i]);
		visit_1512[i]=0;
	}
	for (int i=0;i<n_1512-1;i++){
		curr_1512=0;
		for (int j=i+1;j<n_1512;j++){
			if (arr_1512[i]==arr_1512[j] && visit_1512[j]==0){
				dup_1512++;
				curr_1512++;
				visit_1512[j]=1;
			}
		}
		if (maxfreq_1512<curr_1512){
			maxfreq_1512 = curr_1512;
			most_1512 = arr_1512[i];
		}
	}
	printf("the total number of duplicate elements are %d\n",dup_1512);
	printf("the most frequent element is %d\n",most_1512);
}