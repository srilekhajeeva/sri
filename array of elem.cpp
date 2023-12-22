//Transpose of a Matrix
#include<stdio.h>
int main() {
    printf("Name:Divyadharshini \nReg no: 192324031\n");
      int r, c, i, j;
    printf("Enter the row and column of the Matrice:");
    scanf("%d %d", &r, &c);
    printf("\nEnter the elements of Matrix :\n");
    int mat[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    }
    if (r != c) {
        printf("\nThe given matrix is not a square matrix");
        return 0;
    }
    int transpose[c][r];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            transpose[j][i] = mat[i][j];
    }
    printf("\nThe transpose of the matrix is:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d  ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
