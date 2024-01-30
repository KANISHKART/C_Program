#include<stdio.h>
#include<stdlib.h>
#include "temperature.h"

int main(int argc, char **argv){
   if(argc !=2){
    fprintf(stderr,"Pass a temprature as an argument!\n");
    return 1;
   }
    float c=atof(argv[1]);
    float f=celsius2fahrenheit(c);
    printf("Celsius : %.1f\n",c);
    printf("Fahrenheit : %d\n",(int)f);

    return 0;
}