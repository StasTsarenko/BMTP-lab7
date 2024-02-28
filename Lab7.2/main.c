#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tag() {
    printf("┌──────────────┬────────────────────────┐\n");
    printf("│    Виконав:  │   Царенко Станіслав    │\n");
    printf("└──────────────┴────────────────────────┘\n");
}


int main() {
    system("chcp 65001 & cls");
    tag();
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
