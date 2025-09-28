#include <stdio.h>
#include <math.h>
/*
    N = 6

******
*****
****
***
**
*
*
**
***
****
*****
******
*/

int main()
{

    unsigned int N = 999999937;

    /*
    for( int i = 1; i <= N; i++ ){
        for( int j = 0; j < N - i + 1; j++) printf("*");
        printf("\n");
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    */

    /*
        for(int i = 0; i <= N * 2; i++){
            if(i == N) continue;
            for(int j = 1; j <= abs(N-i); j++) printf("*");
            printf("\n");
        }

    */

    /*
        unsigned int i;
        for( i = 2; i <= N; i++)
                if(N % i == 0) break;

        if(i == N) puts("prostoe");
        else puts("sostavnoe");
     */

        unsigned int i;
        for( i = 2; i * i <= N; i++)
                if(N % i == 0) break;

        if(i*i > N) puts("prostoe");
        else puts("sostavnoe");


          /*
        int s = sqrt(24);
        printf("%d", s);
        //  4  4.656  5 6 7     24
        */
    return 0;
}