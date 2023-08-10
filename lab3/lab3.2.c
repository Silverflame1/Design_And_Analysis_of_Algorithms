#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t start, end;
double exe_time_1, exe_time_2, exe_time_3;

void random_arr_generator_sc_1430(int arr_sm_1512[], int num_sm_1512){
    for (int i = 0; i < num_sm_1512; i++){
        arr_sm_1512[i] = rand();
    }
}

void insertion_sort_asce(int arr_sm_1512[], int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr_sm_1512[i];
        j = i - 1;
        while (j >= 0 && arr_sm_1512[j] > key){
            arr_sm_1512[j + 1] = arr_sm_1512[j];
            j = j - 1;
        }
        arr_sm_1512[j + 1] = key;
    }
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
    printf("Enter the size of the array :");
    scanf("%d", &num_sm_1512);
    int arr_sm_1512[num_sm_1512];
    int check = 1;
    int size[] = {5000, 10000, 15000, 20000, 25000, 30000, 35000, 40000, 45000, 50000};
    
    while(check != 0){
        
        printf("\nChoose the number you want to run: ");
        scanf("%d", &cho);

        switch (cho){
            case 1:
                printf("\nRandom Array :\n");
                start = clock();
                random_arr_generator_sc_1430(arr_sm_1512, num_sm_1512);
                end = clock();
                exe_time_1 = ((double)(end - start)) / CLOCKS_PER_SEC;
                printf("Time taken : %f\n", exe_time_1);
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
                start = clock();
                insertion_sort_asce(arr_sm_1512, num_sm_1512);
                end = clock();
                exe_time_2 = ((double)(end - start)) / CLOCKS_PER_SEC;
                break;
            
            case 4:
                printf("\nSorted Array Descending:\n");
                start = clock();
                insertion_sort_desc(arr_sm_1512, num_sm_1512);
                end = clock();
                exe_time_3 = ((double)(end - start)) / CLOCKS_PER_SEC;
                printf("Time taken : %f\n", exe_time_3);
                break;

            case 5:
                printf("\nTime Complexity To Sort Ascending Of Random Array:\n");
                printf("Time taken : %f\n", exe_time_2);
                break;

            case 6:
                printf("\nTime Complexity To Sort Ascending Of Descending Array:\n");
                printf("\nSorted Array Ascending:\n");
                start = clock();
                insertion_sort_asce(arr_sm_1512, num_sm_1512);
                end = clock();
                exe_time_3 = ((double)(end - start)) / CLOCKS_PER_SEC;
                printf("Time taken : %f\n", exe_time_3);
                break;

            case 7:
                insertion_sort_asce(arr_sm_1512, num_sm_1512);
                printf("\nTime Complexity To Sort Ascending Of Ascending Array:\n");
                printf("\nSorted Array Ascending:\n");
                start = clock();
                insertion_sort_asce(arr_sm_1512, num_sm_1512);
                end = clock();
                exe_time_3 = ((double)(end - start)) / CLOCKS_PER_SEC;
                printf("Time taken : %f\n", exe_time_3);
                break;

            case 8:
                printf("Value of n \t Ramdom Data \t Data in Ascending \t Data in Descending\n");
                for(int i = 0; i < 10; i++){
                    int arr_sm_15121[size[i]];
                    random_arr_generator_sc_1430(arr_sm_15121, size[i]);
                    start = clock();
                    insertion_sort_asce(arr_sm_15121, size[i]);
                    end = clock();
                    exe_time_1 = ((double)(end - start)) / CLOCKS_PER_SEC;

                    start = clock();
                    insertion_sort_asce(arr_sm_15121, size[i]);
                    end = clock();
                    exe_time_2 = ((double)(end - start)) / CLOCKS_PER_SEC;

                    insertion_sort_desc(arr_sm_15121, size[i]);
                    start = clock();
                    insertion_sort_asce(arr_sm_15121, size[i]);
                    end = clock();
                    exe_time_3 = ((double)(end - start)) / CLOCKS_PER_SEC;

                    printf("%d \t\t %f \t\t %f \t\t %f \n", size[i], exe_time_1, exe_time_2, exe_time_3);
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