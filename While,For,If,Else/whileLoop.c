// Example program
#include <stdio.h>

int main()
{
    // switch() / case

    int n = 1;
    switch(n){
        case 1:
            puts("1");
            n++;
        break;

        case 2:
            puts("2");
            n += 2;
        break;

        case 3:
        case 4:
            puts("3 or 4");
            n += 3;
        break;

        default:
            puts("default");
            switch(n){
                case 5:
                    puts("5");
                break;
                case 6:
                    puts("6");
                break;
                case 7:
                    puts("7");
                break;
                default:
                    puts("default");
            }
    }

    /*
    if(N%2 == 0) N = 1;
    else N = 0;


    int a1 = 45, a2 = 86, a3 = 799;

    if(a1 > a2 && a1 > a3) puts("max = a1");
    else{
        if(a2 > a3) puts("max = a2");
        else puts("max = a3");
    }
    */

    /*
        int i = 0;
        while(i <= 100){
            printf("i = %d\n", i);
            i++;
        }
    */
    /*
	
        int i = 0;
        while(i <= 100){
            if(i%2) printf("i = %d\n", i);
            i++;
        }
    
	*/
	
    /*
        int i = 0, j;
        while(i < 10){
            j = 0;
            while(j < 10){
                printf("%d%d ", i , j);
                j++;
            }
            printf("\n");
            i++;
        }
    */

        /*
			Печать елки по левому краю/
			
            *
            **
            ***
            ****
            *****
        */
        /*
        int i = 1, j = 1, N = 10;
        while(i <= N){
            j = 1;
                while(j <= i){
                    printf("*");
                    j++;
                }
            puts("");
            i++;
        }
        */

 
		/*
		Печать елки по левому краю
             *
            **
           ***
          ****
         *****
        */

        /*
        int i = 1, j = 1;
        while(i <= 5){
            j = 5;
            while(j >= 1){
                if(i >= j) printf("*");
                else printf(" ");
                j--;
            }
            puts("");
            i++;
        }
        */


        /*
		Печать елки по центру.
            *
           * *
          * * *
         * * * *
        * * * * *

        */

        /*
        int i = 1, j = 1;
        while(i <= 5){
            j = 5;
            while(j >= 1){
                if(i >= j) printf("* ");
                else printf(" ");
                j--;
            }
            puts("");
            i++;
        }
        */

        /*
        for(int i = 0; i < 10; i++){
            printf("%d \n" i);
        }
        */

        for(int i = 1, j = 10; i <= 10; i++,j--)
            printf("%-5d%d\n", i, j);


    return 0;
}