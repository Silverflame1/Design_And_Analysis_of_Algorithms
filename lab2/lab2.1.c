/*To test whether a number n, entered through keyboard is prime or not
by using different algorithms you know for at-least 10 inputs and note down the time complexity
by step/frequency count method for each algorithm &amp; for each input. Finally make a comparison
of time complexities found for different inputs, plot an appropriate graph &amp; decide which
algorithm is faster.*/

// lab2.1 03/08/2023

# include <stdio.h>
# include<time.h>
# include<math.h>

void prime_all_num_sm_1512(int num_sm_1512, int count_sm_1512){
    int cnt_sm_1512=0;
    clock_t start, end;
    double exe_time;
    start = clock();
    int temp = 0;
    for (int i = 2; i < num_sm_1512; i++){
        cnt_sm_1512++;
        if (num_sm_1512 % i == 0){
            temp++;
            break;
        }
    }
    if (temp == 0 && num_sm_1512 != 1){
        cnt_sm_1512++;
        printf("Algo1 - Prime number\n");
    }else{
        cnt_sm_1512++;
        printf("Algo1 - Not a Prime number\n");
    }
    count_sm_1512 = cnt_sm_1512;
    end = clock();
    exe_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken : %f\n", exe_time);
	printf("Frequency count = %d\n\n",count_sm_1512);
}

void prime_div_by_two(int num_sm_1512, int count_sm_1512){
    clock_t start, end;
    double exe_time;
    start = clock();
    int cnt_sm_1512=0;
    int temp = 0;
    for (int i = 2; i <= num_sm_1512 / 2; i++){
        cnt_sm_1512++;
        if (num_sm_1512 % i == 0){
            temp++;
            break;
        }
    }
    if (temp == 0 && num_sm_1512 != 1){
        cnt_sm_1512++;
        printf("Algo2 - Prime number\n");
    }else{
        cnt_sm_1512++;
        printf("Algo2 - Not a Prime number\n");
    }
    count_sm_1512 = cnt_sm_1512;
    end = clock();
    exe_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken : %f\n", exe_time);
	printf("Frequency count = %d\n\n",count_sm_1512);
}

void sqrt_num_sm_1512(int num_sm_1512, int count_sm_1512){
    clock_t start, end;
    double exe_time;
    start = clock();
	int cnt_sm_1512=0;
	if (num_sm_1512%2==0 && num_sm_1512!=2){
		cnt_sm_1512++;
		printf("Algo3 - Not a Prime number\n");
	}
	for (int i=3; i<(int)(sqrt(num_sm_1512)); i+=2){
		cnt_sm_1512++;
		if (num_sm_1512%i==0){
			printf("Algo3 - Not a Prime number\n");
		}	
	}
	count_sm_1512 = cnt_sm_1512;
    printf("Algo3 - Prime number\n");
	end = clock();
    exe_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken : %f\n", exe_time);
	printf("Frequency count = %d\n\n",count_sm_1512);
}

int main(){
    int count_sm_1512 = 0;
    int num_sm_1512[] = {5, 71, 149, 251, 439, 911, 1777, 6827, 9001, 80803,};
    for(int i = 0; i < 10; i++){
        prime_div_by_two(num_sm_1512[i], count_sm_1512);
        prime_all_num_sm_1512(num_sm_1512[i], count_sm_1512);
        sqrt_num_sm_1512(num_sm_1512[i], count_sm_1512);

    }
}