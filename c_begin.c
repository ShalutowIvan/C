// задачи на printf на модификаторы формата, типа ф строки в питоне
#include <stdio.h>
int main(void)
{
    int a = 3, b = 4;
    double res = 0.75;

    printf("||-----|-----|-----|-----||\n");
    printf("|| act | one | two | res ||\n");
    printf("||=====+=====+=====+=====||\n");
    printf("||%5c|%-5d|%-5d|%05d||\n", '+', a, b, a + b);
    printf("||%5c|%5d|%5d|%05d||\n", '-', a, b, a - b);
    printf("||%5c|%5d|%-5d|%05d||\n", '*', a, b, a * b);
    printf("||%-5c|%-5d|%5d|%1.3f||\n", '/', a, b, res);
    printf("===========================");

    return (0);
}