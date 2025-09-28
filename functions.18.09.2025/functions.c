// Example program
#include <stdio.h>
#include <stdlib.h>
/*
Тип_возвращающего_значения      Имя_Функции (список аргументов){

    Тело функции.

}
*/

int get_max(int a, int b){
    int max = (a > b) ? a : b;
    return max;
    // return (a > b) ? a : b;
}

void PrintHelloWorld(int a, int b){
    puts("Hello world");
    printf("max = %d", a>b?a:b);
}

//!5 = 1*2*3*4*5   !5 = 5 * 4 * 3 ... 2
int get_factorial (int N){
    if(N < 0) exit(1);
    if(N == 0 || N == 1) return 1;
    int result = 1;
    while(N != 1){
        result *= N; // result = result * N;
        N--;
    }
    return result;
}

/*
    a1 = 2, d = 3
    2 5 8 11 14 17 .........
    An = a1 + (n - 1) * d, n - номер элемента
*/

int GetElementFromProgression(int a1, int d, int n){
    return a1 + (n - 1 ) * d;
}

int main()
{

    // break, continue;

    /*
    int i = 1, Sum = 0;

    while(i < 101){
        Sum += i;
        if(Sum > 60) break;
        i++;
    }

    printf("Sum = %d\n", Sum);
    */


    // Распечатать числа от 1 до 20, но не печатать 5 и 15.

    /*
        int i = 0;
        while(i < 20){
            i++;
            if(i == 5 || i == 15)  continue;
            printf("%d ", i);
        }

    */

    /*
        for(int i = 0; i <= 20; i++){
            if(i == 5 || i == 15)  continue;
            printf("%d ", i);
        }
    */

    PrintHelloWorld(6, 90);

    printf(" max = %d ", get_max(15, 10));

    int N = 6;
    int factorial = get_factorial(N);
    printf("!%d = %d\n", N, factorial);

    // 2 4 6 8 10 12 14 ...
    printf("%d \n", GetElementFromProgression(2, 2, 6));

    int X, Y;
    scanf("%d%d", &X, &Y);
    printf("X = %d  Y = %d ", X, Y);

    char c = 'D';
    putc('A', stdout); // fputc('A', stdout);
    printf("%c", 'A');

    c = getc(stdin);
    if(c == '\n') fputs("HELLO WORLD", stdout);
    putc(c, stdout);
    puts("AAAAA");
    return 0;
}
