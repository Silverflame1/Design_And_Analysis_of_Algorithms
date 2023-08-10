/*Write a menu driven program as given below, to sort an array of n
integers in ascending order by insertion sort algorithm and determine the time required (in terms
of step/frequency count) to sort the elements. Repeat the experiment for different values of n and
different nature of data (i.e.apply insertion sort algorithm on the data of array that are already
sorted, reversely sorted and random data). Finally plot a graph of the time taken versus n for each
type of data. The elements can be read from a file or can be generated using the random number
generator. Depending on the nature of data what is your conclusion about the time taken by each
set of data. Can you justify your conclusion.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void random_arr_generator_sc_1430(int arr_sm_1512[], int num_sm_1512){
    time_t time_sm_1512;
	srand((unsigned)time(&time_sm_1512));
    for (int i = 0; i < num_sm_1512; i++){
        arr_sm_1512[i] = rand();
    }
}

int insertion_sort_asce(int arr_sm_1512[], int n){
    int i, key, j, count = 0;
    for (i = 1; i < n; i++) {
        key = arr_sm_1512[i];
        j = i - 1;
        while (j >= 0 && arr_sm_1512[j] > key){
            arr_sm_1512[j + 1] = arr_sm_1512[j];
            j = j - 1;
            count++;
        }
        count++;
        arr_sm_1512[j + 1] = key;
    }
    return count;
}

void insertion_sort_desc(int arr_sm_1512[], int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr_sm_1512[i];
        j = i - 1;
        while (j >= 0 && arr_sm_1512[j] < key){
            arr_sm_1512[j + 1] = arr_sm_1512[j];
            j = j - 1;
        }
        arr_sm_1512[j + 1] = key;
    }
}

int main(){
    
    int num_sm_1512, cho;
    int count = 0, count2 = 0, count3 = 0;

    int arr_sm_1512[num_sm_1512];
    int check = 1;
    int size[] = {5000, 10000, 15000, 20000, 25000, 30000, 35000, 40000, 45000, 50000};
    
    while(check != 0){
        
        printf("\nChoose the number you want to run: ");
        scanf("%d", &cho);

        switch (cho){
            case 1:
                printf("Enter the size of the arr_sm_1512ay :");
                scanf("%d", &num_sm_1512);
                printf("\nRandom Array :\n");
                random_arr_generator_sc_1430(arr_sm_1512, num_sm_1512);
                break;

            case 2:
                printf("\nCurrent Array :\n");
                for (int i = 0; i < num_sm_1512; i++){
                    printf("%d\t", arr_sm_1512[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("\nSorted Array Ascending:\n");
                count = insertion_sort_asce(arr_sm_1512, num_sm_1512);
                break;
            
            case 4:
                printf("\nSorted Array Descending:\n");
                insertion_sort_desc(arr_sm_1512, num_sm_1512);
                break;

            case 5:
                printf("\nTime Complexity To Sort Ascending Of Random Array:\n");
                printf("Time taken : %d\n", count);
                break;

            case 6:
                printf("\nTime Complexity To Sort Ascending Of Descending Array:\n");
                printf("\nSorted Array Ascending:\n");
                count2 = insertion_sort_asce(arr_sm_1512, num_sm_1512);
                printf("Time taken : %d\n", count2);
                break;

            case 7:
                insertion_sort_asce(arr_sm_1512, num_sm_1512);
                printf("\nTime Complexity To Sort Ascending Of Ascending Array:\n");
                printf("\nSorted Array Ascending:\n");
                count3 = insertion_sort_asce(arr_sm_1512, num_sm_1512);        
                printf("Time taken : %d\n", count3);
                break;

            case 8:
                printf("Value of n \t Ramdom Data \t Data in Ascending \t Data in Descending\n");
                for(int i = 0; i < 10; i++){
                    int arr_sm_15121[size[i]];
                    random_arr_generator_sc_1430(arr_sm_15121, size[i]);
                    count = insertion_sort_asce(arr_sm_15121, size[i]);
                    
                    count2 = insertion_sort_asce(arr_sm_15121, size[i]);

                    insertion_sort_desc(arr_sm_15121, size[i]);
                    count3 = insertion_sort_asce(arr_sm_15121, size[i]);

                    printf("%d \t\t %d \t\t %d \t\t %d \n", size[i], count, count2, count3);
                    count = 0;
                    count2 = 0;
                    count3 = 0;
                }
                break;

            default:
                printf("\nNOT A VALID INPUTu\n");
                break;
        }
        printf("\nDo u want to continue : ");
        scanf("%d", &check);
    }
}