/*To find out GCD (greatest common divisor) using the following three
algorithms.
a) Euclid’s algorithm
b) Consecutive integer checking algorithm.
c) Middle school procedure which makes use of common prime factors. For finding
list of primes implement sieve of Eratosthenes algorithm

Find out which algorithm is faster for the following data. Estimate how many times it will be
faster than the other two by step/frequency count method in each case.*/

// lab2.1 03/08/2023

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int euclid(int n1_sm_1512, int n2_sm_1512, int* count_sm_1512){
	int cnt_sm_1512=0;
	if (n2_sm_1512>n1_sm_1512){
		cnt_sm_1512++;
		int temp = n1_sm_1512;
		n1_sm_1512=n2_sm_1512;
		n2_sm_1512=temp;
	}
	while (n1_sm_1512%n2_sm_1512!=0){
		cnt_sm_1512++;
		int temp = n1_sm_1512;
		n1_sm_1512=n2_sm_1512%n1_sm_1512;
		n2_sm_1512=temp;
	}
	*count_sm_1512 = cnt_sm_1512;
	return n2_sm_1512;
}


int cons_int_check(int n1_sm_1512, int n2_sm_1512, int* count_sm_1512){
    int gcd;
    int cnt_sm_1512=0;
    for(int i=1; i <= n1_sm_1512 && i <= n2_sm_1512; ++i){
        cnt_sm_1512++;
        if(n1_sm_1512%i==0 && n2_sm_1512%i==0){
            gcd = i;
        }
    }
    *count_sm_1512 = cnt_sm_1512;
    return gcd;
}


int middle_school(int n1_sm_1512, int n2_sm_1512, int* count_sm_1512){
    int cnt_sm_1512 = 0;
    bool prime1_sm_1512[n1_sm_1512 + 1];
    memset(prime1_sm_1512, true, sizeof(prime1_sm_1512));
    for (int i = 2; i * i <= n1_sm_1512; i++){
        if (prime1_sm_1512[i] == true){
            for (int j = i * i; j <= n1_sm_1512; j += i){
                prime1_sm_1512[j] = false;
            }
            cnt_sm_1512++;
        }
    }

    bool prime2_sm_1512[n2_sm_1512 + 1];
    memset(prime2_sm_1512, true, sizeof(prime2_sm_1512));
    for (int i = 2; i * i <= n2_sm_1512; i++){
        if (prime2_sm_1512[i] == true){
            for (int j = i * i; j <= n2_sm_1512; j += i){
                prime2_sm_1512[j] = false;
            }
            cnt_sm_1512++;
        }
    }

    int arr1_sm_1512[n1_sm_1512 / 2];
    int arr2_sm_1512[n2_sm_1512 / 2];
    int a = n1_sm_1512;
    for (int j = 2, j_sm_1512 = 0; n1_sm_1512 != 1;){
        if (prime1_sm_1512[j] == true && n1_sm_1512 % j == 0){
            arr1_sm_1512[j_sm_1512] = j;
            j_sm_1512++;
            n1_sm_1512 /= j;
        }
        else{
            j++;
        }
        cnt_sm_1512++;
    }
    for (int j = 2, j_sm_1512 = 0; n2_sm_1512 != 1;){
        if (prime2_sm_1512[j] == true && n2_sm_1512 % j == 0){
            arr2_sm_1512[j_sm_1512] = j;
            j_sm_1512++;
            n2_sm_1512 /= j;
        }
        else{
            j++;
        }
        cnt_sm_1512++;
    }
    int gcd = 1;
    for (int j = 0, j_sm_1512 = 0; arr1_sm_1512[j] != 0 && arr2_sm_1512[j_sm_1512] != 0;){
        if (arr1_sm_1512[j] == arr2_sm_1512[j_sm_1512]){
            gcd = gcd * arr1_sm_1512[j];
            j++;
            j_sm_1512++;
        }
        else if (arr1_sm_1512[j] > arr2_sm_1512[j_sm_1512]){
            j_sm_1512++;
        }
        else if (arr1_sm_1512[j] < arr2_sm_1512[j_sm_1512]){
            j++;
        }
        cnt_sm_1512++;
    }
    *count_sm_1512 = cnt_sm_1512;
    return gcd;
}


int main(){
    clock_t start, end;
    double exe_time;
    int count_sm_1512 = 0;
    int n1_sm_1512[] = {31415, 56, 34218, 12, 31415, 12};
    int n2_sm_1512[] = {14142, 32566, 56, 15, 31415, 12};
    for(int i = 0; i < 6; i++){
        start = clock();
        printf("Euclid GCD(%d, %d) = %d\n", n1_sm_1512[i], n2_sm_1512[i], euclid(n1_sm_1512[i], n2_sm_1512[i], &count_sm_1512));
        end = clock();
        exe_time = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken : %f\n", exe_time);
        printf("Frequency count = %d\n\n",count_sm_1512);

        start = clock();
        printf("Common GCD(%d, %d) = %d\n", n1_sm_1512[i], n2_sm_1512[i], cons_int_check(n1_sm_1512[i], n2_sm_1512[i], &count_sm_1512));
        end = clock();
        exe_time = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken : %f\n", exe_time);
        printf("Frequency count = %d\n\n",count_sm_1512);

        start = clock();
        printf("Common GCD(%d, %d) = %d\n", n1_sm_1512[i], n2_sm_1512[i], middle_school(n1_sm_1512[i], n2_sm_1512[i], &count_sm_1512));
        end = clock();
        exe_time = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken : %f\n", exe_time);
        printf("Frequency count = %d\n\n",count_sm_1512);
    }
}