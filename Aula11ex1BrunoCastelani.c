#include <stdio.h>



int main() {
   
    int m, n; 

    printf("numero de linhasda matriz: ");
    scanf("%d", &m);
    printf("numero de colunas: ");
    scanf("%d", &n);
    int A[m][n];
    int B[m][n];
    int C[m][n];
 
    printf("dados da matris A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
  printf("\n");
    printf("dados da matris B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nmatriz C:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}