/*Выполнить сравнение двух строк, введенных с клавиатуры
с игнорированием пробелов*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENTH 126

int main() {

    char *string_1 = (char*)malloc(MAX_LENTH * sizeof(char));
    char *string_2 = (char*)malloc(MAX_LENTH * sizeof(char));

    int string_1_len = 0;
    int string_2_len = 0;
    int symb_count = 1;

    printf("Введите первую строку (длина не более 125 символов): ");
    fgets(string_1, MAX_LENTH, stdin);

    printf("Введите вторую строку (длина не более 125 символов): ");
    fgets(string_2, MAX_LENTH, stdin);

    string_1_len = strlen(string_1);
    string_2_len = strlen(string_2);
    printf("Количество символов в первой строке: %d\n", string_1_len - 1);
    printf("Количество символов во второй строке: %d\n\n", string_2_len - 1);

    //сравнение строк
    if (string_1_len != string_2_len) printf("Строки не совпадают\n");
    else {
        while (*string_1 != '\n') {

            if (*string_1 != *string_2) {
                printf("Cимвол %d первой строки: %c, cимвол %d второй строки: %c\n", symb_count, *string_1, symb_count, *string_2);
                printf("Строки не совпадают\n");
                return 0;
            }
            else {
                ++string_1;
                ++string_2;
                ++symb_count;
            }
        }
        printf("Строки совпадают\n");
    }

    return 0;
}
