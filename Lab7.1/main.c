#include <stdio.h>
#include <string.h>

int main() {
    system("chcp 65001 & cls");
    char sentence[1000];
    int count = 0;

    printf("Введіть речення: ");
    scanf("%[^\n]s", sentence);
    int len = strlen(sentence);


    for (int i = 0; i < len; i++) {
        if (sentence[i] == 'Ж' || sentence[i] == 'ж') {
            count++;
        }
    }

    if (count > 0) {
        printf("Кількість 'Ж' в реченні: %d\n", count);
    } else {
        printf("В цьому реченні немає 'Ж'\n");
    }

    return 0;
}
