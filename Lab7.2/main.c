#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char *locale = setlocale(LC_ALL, "");
    system("chcp 65001 & cls");
    const int len = 15;
    int arr[len];
    int count = 0;
    printf("Введіть %d цифр: \n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nМасив: \n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
        if (arr[i] > arr[0] && arr[i] < arr[len - 1])
            count++;
    }
    printf("\nКількість елементів більше першого і менше останнього: %d", count);

    return 0;
}
