

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int array_size(){
    bool invalid=true;
    int size_of_arr;
    while(invalid){
        printf("Please give a valid size of the array = ");//ask user for array
        scanf("%d",&size_of_arr); //get response from user, integer
        if(size_of_arr>=1){
            invalid = false;
        }
    }
    return size_of_arr;
}

int * initial_array(int size_of_arr){
    int *p = calloc(size_of_arr,sizeof(int)); 

    if (p == NULL) {
        printf("Error reallocing\n");
        return NULL;
    }
      return p;
}

int main(void){
    int size_of_arr = array_size();  // size of array variable
    printf("\n"); // space in command line
    int * n = initial_array(size_of_arr);

    printf("The first value in the array is = %d\n",*(n));// this should output 0
    printf("The first value in the array is = %d\n",*(n+1));// this should output 0
    printf("The second value in the array is = %d\n",*(n+2));// this should output 0

    free(n);
    return 0;
}