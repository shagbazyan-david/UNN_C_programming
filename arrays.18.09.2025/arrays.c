
#include <stdio.h>

int main()
{
    /*
    int a[5];
    a[0] = 7;
    a[1] = 5;
    a[2] = 7;
    a[3] = -789;
    a[4] = 192;

    for(int i = 0; i < 5; i++) Sum += a[i];
    */
    
    // int a[5] = {4, 23, -56, 234, 678};
    
   // int a[10] = {6,45,234}; // 6 45 234 0 0 0 0 0 0 0  
    
    /*
    int a[100] = {0}; // 0 0 0 0 ...............0
    a[90] = 78;
    */
    
    int a[] = {4,5,6,74,45,100,101};
    
      //sizeof(a) // 5 * sizeof(int)
    int N = sizeof(a)/sizeof(int);
    
    
    int X = 89;
    printf("&X = %p, &a[0] = %p &a = %p\n", &X, &a[0], a);
    
    
    
    r