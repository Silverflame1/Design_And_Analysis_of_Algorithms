#include <stdio.h>
#include <math.h>

#define MAX_N 100

int main(){
    int num_sm_1512;
    double arr_sm_1512[MAX_N][MAX_N];
    int rowSum[MAX_N] = {0};
    int colSum[MAX_N] = {0};
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &num_sm_1512);
    printf("Enter the matrix elements (non-negative real numbers):\n");
    for (int i = 0; i < num_sm_1512; i++){
        for (int j = 0; j < num_sm_1512; j++){
            scanf("%lf", &arr_sm_1512[i][j]);
            rowSum[i] += floor(arr_sm_1512[i][j]);
            colSum[j] += floor(arr_sm_1512[i][j]);
        }
    }

    for (int i = 0; i < num_sm_1512; i++){
        for (int j = 0; j < num_sm_1512; j++){
            int floorVal = floor(arr_sm_1512[i][j]);
            int ceilVal = ceil(arr_sm_1512[i][j]);

            double fractionalPart = arr_sm_1512[i][j] - floorVal;
            if (rowSum[i] < ceilVal){
                arr_sm_1512[i][j] = ceilVal;
                colSum[j] += ceilVal - floorVal;
            }
            else if (colSum[j] < ceilVal){
                arr_sm_1512[i][j] = floorVal;
                rowSum[i] += ceilVal - floorVal;
            }
            else{
                if (fractionalPart <= 0.5){
                    arr_sm_1512[i][j] = floorVal;
                    rowSum[i] += ceilVal - floorVal;
                }
                else{
                    arr_sm_1512[i][j] = ceilVal;
                    colSum[j] += ceilVal - floorVal;
                }
            }
        }
    }

    printf("\nModified Matrix:\n");
    for (int i = 0; i < num_sm_1512; i++){
        for (int j = 0; j < num_sm_1512; j++){
            printf("%.0f ", arr_sm_1512[i][j]);
        }
        printf("\n");
    }

    return 0;
}