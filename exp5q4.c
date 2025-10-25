// 4.	WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. 
// Read matrix A and matrix B in row major order respectively. 
// Print both the input matrices and resultant matrix with suitable headings 
// and output should be in matrix format only. 
// Program must check the compatibility of orders of the matrices for multiplication. 
// Report appropriate message in case of incompatibility.

#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    int a[m][n], b[p][q], result[m][q];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("First matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
