/*
#include <stdio.h>

struct par{
    int x;
    int y;
};

typedef struct par par;

int main(){
    par x;
    x.x = 1;
    x.y = 2;
    printf("%d %d", x.x, x.y);

    return 0;
}

*/

/*
#include <stdio.h>

struct par{
    int x;
    int y;
};

typedef struct par par;

int main(){
    par x;
    (&x) -> x = 1;
    x.y = 2;
    printf("%d %d", x.x, x.y);

    return 0;
} 
*/

/*

#include <stdio.h>

struct par{
    int x;
    int y;
};

typedef struct par par;

int main(){
    par x;
    par * p = &x;
    p -> x = 1;
    x.y = 2;
    printf("%d %d", x.x, x.y);

    return 0;
}

*/

#include <stdio.h>

struct par{
    int x;
    int y;
};

typedef struct par par;

void teste( par *p ){
    p -> x = 2;
    p -> y = 3;
}

int main(){
    par x;
    teste( &x );
    printf("%d %d", x.x, x.y);

    return 0;
}
