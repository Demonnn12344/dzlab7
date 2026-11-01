#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    int k;
    int first = 1;
    int day;

    setlocale(LC_CTYPE, "");

    printf("¬ведите номер дн€ года k (1 - 365): ");
    scanf("%d", &k);

    day = (first - 1 + k - 1) % 7 + 1;

    printf("%d-й день года - ", k);
    switch (day) {
    case 1: printf("понедельник\n"); break;
    case 2: printf("вторник\n"); break;
    case 3: printf("среда\n"); break;
    case 4: printf("четверг\n"); break;
    case 5: printf("п€тница\n"); break;
    case 6: printf("суббота\n"); break;
    case 7: printf("воскресенье\n"); break;
    }

    return 0;
}
