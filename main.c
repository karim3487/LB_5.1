/*Определить, сколько в матрице А (8х6) строк, среднее
 * арифметическое значение элементов которых больше среднего
 * арифметического значения элементов массива В (18).*/

#include <stdio.h>
#include <windows.h>

#define M 8
#define N 6
#define L 18

void input_array1(int array[], int n);

void input_array2(int array[], int m, int n);

void output_array1(int array[], int n);

void output_array2(int array[], int m, int n);

int main() {
    system("chcp 65001");
    int a[L], i, j, s = 0, k = 0;
    double sa = 0;
    input_array1(&a[0], L);
    for (
            i = 0;
            i < L; i++)
        s += a[i];
    sa = s / L;
    int b[M][N];
    input_array2(b[0],
                 M, N);
    for (
            i = 0;
            i < M; i++) {
        s = 0;
        for (
                j = 0;
                j < N; j++) {
            s += b[i][j];
        }
        if ((double) (s / N) > sa)
            k++;
    }
    printf("\nКол-во строк матрицы, ср. арифм. которых больше ср. арифм.массива =%d\n", k);
    output_array1(&a[0], L);
    output_array2(b[0],
                  M, N);
}

void input_array1(int array[], int n) {
    int i;
    printf("Введите массив, состоящий из %d элементов\n", n);
    printf("----------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("Введите a[%d] : ", i);
        scanf("%d", &array[i]);
    }
}

void input_array2(int array[], int m, int n) {
    int i, j;
    printf("\nВведите матрицу %dx%d\n", m, n);
    printf("-------------------\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Введите b[%d][%d] : ", i, j);
            scanf("%d", &array[i * n + j]);
        }
    }
}

void output_array1(int array[], int n) {
    int i;
    printf("\nВывод массива\n");
    printf("-------------\n");
    for (i = 0; i < n; i++)
        printf("%d\t", array[i]);
    printf("\n");
}

void output_array2(int array[], int m, int n) {
    int i, j;
    printf("\nВывод матрицы\n");
    printf("-------------\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", array[i * n + j]);
        printf("\n");
    }
    printf("\n");
}


