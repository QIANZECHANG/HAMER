#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

typedef struct N{
    int* p1;
    int* p2;
}node;

int func(int a){
    node x;
    x.p1=(int*)malloc(4);
    int* n;
    if(a<5){
        n=x.p1;
    }else{
        n=malloc(4);
    }
    return 1;    
}
