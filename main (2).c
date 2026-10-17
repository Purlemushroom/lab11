/*
 * Студент: Шпаков Максим Денисович
 * Группа: 1-1 Прикладная информатика
 * Назначение: Передавать массив вместе с используемым размером и отделять вычисление от вывода
 */
#include <stdio.h>

long long sum(const int a[], int n) {
    long long total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return total;
}

int count_above(const int a[], int n, int limit) {
    int count = 0;
    for (int i = 0; i < n; i++) if (a[i] > limit) count++;
    return count;
}

void print_array(const int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    putchar('\n');
}

int main(void) {
    int a[] = {4, -2, 7, 0};
    int n = (int)(sizeof a / sizeof a[0]);
    print_array(a, n);
    printf("%d\n", count_above(a, n, 0));
    printf("%d\n", count_above(a, n, 7));
    printf("%d\n", count_above(a, 2, -3));
    printf("%d\n", count_above(a, 0, 0));
    return 0;
}