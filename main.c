#include <stdio.h>

void swap(int *p, int *q){ // set a pointer to each memory address of the variables

    int r,s;
    r = *p;
    s = *q;

    *q = r;
    *p = s;
}

int main(void){

    int a = 3;
    int b = 9;

    
    swap(&a , &b);

    printf("%d and then %d\n",a,b);
    return 0;
}