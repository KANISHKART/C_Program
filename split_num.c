#include <stdio.h>

void main(){
    int number=1000000;

    int *ptr1=&number;
    short *ptr2=(short *)ptr1;
    printf("%d %hd %hd", *ptr1,*ptr2,*(ptr2+1));

}