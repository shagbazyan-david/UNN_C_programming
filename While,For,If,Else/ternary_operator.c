/*
	Тернарный оператор и его применение
	Цикл while, начало

*/


#include <stdio.h>

int main()
{
    // (  Условие  ) ? выр1. : выр2.

    printf("%d\n", ((11 % 2 == 0) ? 1 : 0) );

    int n = (10 % 2 == 0) ? 1 : 0;

    int m;
    (10 % 2 == 0) ? m = 1 : m = 0;

    /*
        F(x) = 0,  x == 0
        F(x) = 1,  x > 0
        F(x) = -1, x < 0
    */
    int x = -25;
    int Fx = ( x == 0) ? 0 : ( (x > 0) ? 1 : -1 ) ;
    printf("Fx = %d\n", Fx);

    int a1 = 34, a2 = 12, a3 = 67, max;
    max = ( a1 > a2 && a1 > a3 )?a1 : ((a2 > a3) ? a2:a3);

    int N = 15694; //  /  %
    int sum = N%10 + (N/10)%10 + (N/100)%10 + (N/1000)%10+
    N/10000;

    int i = 0;
    while(i <= 100){
        (i%2) ? printf("") : printf("i = %d\n", i);
        i += 1;
    }
    // break, continue

    int SUM = 0;
    i = 0;
    while(i <= 100 && SUM <= 60){
        // if(SUM > 60) break;
        SUM += i;
        i++;
    }

    return 0;
}

