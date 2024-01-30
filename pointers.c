#include <stdio.h>

long sum_array(int *array,size_t length){
    long output=0;
    for(int i=0;i<length;i++)
        output+=(long)*(array+i);
    
    return output;
}



void pointers(){
    int number=20;
    int *ptr = &number;

    printf("Pointer address : %p Pointer value : %d \n",ptr,*ptr);
}

void main(){
    int array[]={1,2,3,4,5};

    size_t length= sizeof(array)/sizeof(array[0]);

    // printf("The sum of all elements is %ld\n",sum_array(array, length));

    // pointers();
    

    char string[]= {'H','e','l','l'};

    char *s="hello\n";

    printf("%s",s);
    printf("%s\n",string);
}