#include <stdio.h>
 
int main()
{

    /*
    1 0 1 0 1 0 1 0
    0 1 0 1 0 1 0 1
    1 0 1 0 1 0 1 0
    0 1 0 1 0 1 0 1
	...............
    ...............

    */

    for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                printf("%d ", !((i+j)%2));
            }
            puts("");
    }

    /*
        1 0 0 0 1
        0 1 0 1 0
        0 0 1 0 0
        0 1 0 1 0
        1 0 0 0 1

    */

    int N = 13;

         for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                printf("%d ", (i == j || (i+j)==(N-1) ) ? 1 : 0 );
            }
            puts("");
    }



    return 0;
}
