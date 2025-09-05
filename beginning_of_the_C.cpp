#include <stdio.h>


int main()
{
    printf("Hello world\n");
    puts("Hello"); //fputs("Hello\n", stdout);
    printf("My name is Dima\n");//fprintf(stdout, "Hello");

    /*
    int ~ signed int    -(2^(N-1)).....2^(N-1)-1 , %d
    unsigned int   0.....(2^N)-1 ,  %u
    */
    int a = 456, b = 788;
    printf(" Hello world %d dfjk\n %d sdfgk\n", a, 12);
    // +, -, *, /, %
    printf(" 5/2 =  %d  5%%2 = %d\n", 5 / 2, 5 % 2);
    printf("5*(3+6) = %d\n" , 5 * (3 + 6) );
    // >, <, >=, <=, !=, ==
    printf("%d %d\n", 10 > 4, 4 != 4);

    // &&, ||, !
   /*
    (10 > 4 && 3!=3) = 1
    1 && 1 = 1
    //--------------------
    1 || 1 = 1
    0 || 1 = 1
    0 || 0 = 0
    1 || 0 = 1
    //-------------------
    !1 = 0
    !0 = 1
    */

    printf("%d\n", (10 > 5 && 5 > 2));
    printf("%d\n", (3 < 2 || 10 == 10));
    printf("%d\n", !(2 < 2));

    printf("sizeof(int) = %d , sizeof(short) = %d, sizeof(char) = %d", sizeof(int), sizeof(short), sizeof(char));
	
     //  Печать кавычки, слеша и процента  \',  \""  \\, %%
     //   \t Табуляция, \n Перевод строки,  \r Звуковой сигнал
    int x = 12;
    short y = 12;
    char z = 34;
    return 0;
}
