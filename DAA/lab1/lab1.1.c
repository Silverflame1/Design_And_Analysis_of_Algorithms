//To store random numbers into an array of N integers and then find out the smallest and largest number stored in it. N is the user input.
//Lab1.1 (27/07/2023)

#include <stdio.h>

int main(){
    int num_1512,l_1512,s_1512;
    printf("Enter the no of elemnts : ");
    scanf("%d", &num_1512);
    int arr_1512[num_1512];
    printf("Enter elements: ");
    for(int i=0 ; i<num_1512 ; i++){
        scanf("%d", &arr_1512[i]);
    }
    printf("The random array elements are as follows: \n");
    for(int i=0 ; i<num_1512 ; i++){
        printf("\t%d", arr_1512[i]);
    }
    printf("\nAmong the random elements: \n");
    s_1512 = arr_1512[0];
    l_1512= arr_1512[0];
    for(int i= 1; i < num_1512; i++){
        if (arr_1512[i] < s_1512){
            s_1512 = arr_1512[i];
        }
        if (arr_1512[i] > l_1512){
            l_1512 = arr_1512[i];
        }
    }
    printf("Maximum : %d\n", l_1512);
    printf("Minimun : %d\n", s_1512);

}