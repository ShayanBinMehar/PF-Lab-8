#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, rowMin, colMax;

    printf("Enter 9 elements for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d, ", matrix[i][j]);
        }
        printf("\n");
    }
	
    for (i = 0; i < 3; i++) {
        rowMin = matrix[i][0];
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
            }
        }

        // Check if the row minimum is also a column maximum
        int isSaddlePoint = 1;
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] != rowMin) {
                continue; // Not the row minimum, skip to next element
            }

            for (int k = 0; k < 3; k++) {
                if (matrix[k][j] > rowMin) {
                    isSaddlePoint = 0;
                    break; // Not a column maximum, break the inner loop
                }
            }

            if (isSaddlePoint) {
                printf("Saddle point found at (%d, %d): %d\n", i, j, matrix[i][j]);
            }
        }
    }

    return 0;
}