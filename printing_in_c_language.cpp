#include <stdio.h>
int main()
{
    printf("\tHello world\n");
    printf("Hello \" \\ \' %% \n");
    //puts("My name is Dima");
    fputs("My name is Dima\n", stdout);

    printf("11\n");
    fprintf(stdout, "11\n");

    putc('A', stdout);
    fputc('B', stdout);

    int a = 45, b = 78;  // %d
    signed int c = -56;
    unsigned int d = 7845; // %u
    printf("\n%d", a);
    printf("\n a = %d, b = %d, d = %u", a, b, d);

    // +, -, *, /, %

    printf("\n5/2 = %d, 7/2 = %d", 5/2, 7/2);

    float f1 = 5, f2 = 2;
    printf("\n%.2f", f1/f2);
    printf("\n7*(5+2)= %d", 7*(5+2));
    printf("\n5%%2 = %d 7%%2 = %d\n", 5%2, 7%2);

    // >, <, >=, <=, !=, ==   Результат ИСТИНА или ЛОЖЬ
    printf("7>2 = %d, 5!=5 = %d\n", 7>2, 5!=5);

    /*
    // && И,  || ИЛИ, ! НЕ
        условие1 ОПЕРАТОР условие2
     (7>2 && 5!=2) = 1
        1 && 1 = 1
        1 && 0 = 0
        0 && 1 = 0
        0 && 0 = 0
    ------------------
        1 || 1 = 1
        0 || 1 = 1
        1 || 0 = 1
        0 || 0 = 0
    ------------------
    !1 = 0
    !0 = 1
    */
    printf("%d\n", (7>2 && 5!=2));
    printf("%d\n", (7==7 || 5%2==0));
    printf("%d", !(2<2));

    /* Тернарный оператор.
        (Условие) ? выр1. : выр2.
    */

    //int x = (4%2==0) ? 1 : 0;
    //printf("%d", x);

    /*
        F(x) = 0, x = 0;
        F(x) = 1, x > 0;
        F(x) = -1, x < 0;
    */
    int x = -20;
    int Fx =  ( x == 0 ? 0 : (x < 0 ? -1:1) );
    printf("F(x) = %d\n", Fx);

    int a1 = 45, a2 = 56, a3 = 12;
    printf("max  = %d\n", ( a1 > a2 && a1 >a3)? a1 : ((a2>a3)? a2 : a3)) ;

    /*
    //+=, -=, *=, /=, %=
    int x1 = 3, x2 = 67;
        x1 += x2 // x1 = x1 + x2;
    */

    // A++, ++A, A--, --A
    int x1 = 5;
    x1++; // 6
    x1 = 5;
    ++x1; // 6
    x1 = 5;
    int x2 = x1++; // x2 = x1, x1 += 1;
    printf("x2 = %d, x1 = %d\n", x2, x1); // 5 6
    x1 = 5;
    x2 = ++x1; // x1+=1, x2 = x1;
    printf("x2 = %d, x1 = %d\n", x2, x1); // 6 6

    ++(++(++x1));
    printf("%d\n", x1);

    /*
    if(10%2==0){
         puts("10 четное");
         x1--;
    }
    if(10!=5) puts("hello");
    */

    if(5%2 == 0) puts("hello");
    else puts("good bye");

    /*
    if(условие){
        code1
        code2
        if
        else{
            if
            else
        }
    }
    else{
        code1
        code2
        if
        if
        else

    }
    */
    int N = 83349, sum = 0;
    printf("sum = %d", sum); // сумма цифр числа

    return 0;
}
