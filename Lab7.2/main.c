#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char *locale = setlocale(LC_ALL, "");
    system("chcp 65001 & cls");
    const int len = 15;
    int arr[len];
    int count = 0;
    printf("������ %d ����: \n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n�����: \n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
        if (arr[i] > arr[0] && arr[i] < arr[len - 1])
            count++;
    }
    printf("\nʳ������ �������� ����� ������� � ����� ����������: %d", count);

    return 0;
}
