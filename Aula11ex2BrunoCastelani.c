#include <stdio.h>

int main() {
   
    int m, n, p;

    printf("linhas matriz A: ");
    scanf("%d", &m);
    printf("colunas matriz A e linhas da matriz B: ");
    scanf("%d", &n);
    printf("colunas matriz B: ");
    scanf("%d", &p);
    int A[m][n];
    int B[n][p];
    int D[m][p];
    
    printf("\nInforme os elementos da matriz A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
 
    printf("\nInforme os elementos da matriz B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            D[i][j] = 0;
            for (int k = 0; k < n; k++) {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nmatriz D :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}