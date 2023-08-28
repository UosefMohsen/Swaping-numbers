#include <stdio.h>n
#include <stdlib.h>

int main()
{
    int a = 5 , b = 12 ;


    printf("original numbers %d %d \n", a,b);
    // first method

    for ( a = 5 ; a < 12 ; a++ ){

    }
    for ( b = 12 ; b > 5 ; b-- ){

    }
    printf("new swapped numbers %d %d\n", a,b);
        // second method

    if (a == 12)
        a = 5;

        if (b == 5)
        b = 12;
    printf("new swapped numbers %d %d \n", a,b);
        // third method

    while (a < 12)
        a++;
    while (b > 5)
        b--;
        printf("new swapped numbers %d %d \n", a,b);

        // fourth method
    do{
        a--;
        b++;
    }while( a > 5 , b < 12 );
    printf("new swapped numbers %d %d \n", a,b);

        // fifth method
    a &= ~5;
    a |= 12;
    b &= ~12;
    b |= 5;
        printf("new swapped numbers %d %d \n", a,b);


    return 0;
}
