//To store random numbers into an array of N integers and then find out the smallest and largest number stored in it. N is the user input.
//Lab1.1 (27/07/2023)

#include <stdio.h>

int main(){
    int num_sm_1512,l_sm_1512,s_sm_1512;
    printf("Enter the no of elemnts : ");
    scanf("%d", &num_sm_1512);
    int arr_sm_1512[num_sm_1512];
    printf("Enter elements: ");
    for(int i_sm_1512=0 ; i_sm_1512<num_sm_1512 ; i_sm_1512++){
        scanf("%d", &arr_sm_1512[i_sm_1512]);
    }
    printf("The random array elements are as follows: \n");
    for(int i_sm_1512=0 ; i_sm_1512<num_sm_1512 ; i_sm_1512++){
        printf("\t%d", arr_sm_1512[i_sm_1512]);
    }
    printf("\nAmong the random elements: \n");
    s_sm_1512 = arr_sm_1512[0];
    l_sm_1512= arr_sm_1512[0];
    for(int i_sm_1512= 1; i_sm_1512 < num_sm_1512; i_sm_1512++){
        if (arr_sm_1512[i_sm_1512] < s_sm_1512){
            s_sm_1512 = arr_sm_1512[i_sm_1512];
        }
        if (arr_sm_1512[i_sm_1512] > l_sm_1512){
            l_sm_1512 = arr_sm_1512[i_sm_1512];
        }
    }
    printf("Maximum : %d\n", l_sm_1512);
    printf("Minimun : %d\n", s_sm_1512);

}
