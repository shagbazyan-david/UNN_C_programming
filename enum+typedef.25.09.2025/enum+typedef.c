/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    typedef unsigned int UINT; 
    UINT a = 8;
    
    typedef unsigned long long int ULLI;
    ULLI l = 90;
    
    /*
    enum Color {red, blue, black, white};
               //0    1     2      3
    enum Color c1 = blue;
    c1 = white; // 3
    */
    
    /*
    enum Color {red, blue, black} c1, c2;
    c1 = red;
    c2 = black;
    */
    
    /*
    enum {A,B,C,D} ;
    */
    
    /*
    enum {A,B,C,D} c1, c2, c3;
    c1 = A;
    */
    
    /*
    enum Color {red, blue, black};
    enum Color c1; 
    typedef enum Color Color;
    Color c2 = black;
    */
    
    
    typedef enum {red, blue, black} Color;
            /* 
                enum Color {red, blue, black};
                typedef enum Color Color;
            */
    Color c1 = red;
    
    
    typedef enum {A, B, C = 10, D, E, Z = -5, W, T, O = 90, P} Type;
               // 0  1   10     11 12   -5   -4 -3   90     91 
  
    return 0;
}