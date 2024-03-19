#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Person{
    char name[10];
    short age;
};


void display_person(struct Person *person){
    printf("The person name is : %s \n The person age is : %d \n",person->name,person->age);
}

void main(){
    int arr[5];
    
    // for(int i=0;i<6;i++){
    //     scanf("%d",&arr[i]);
    // }

    // printf("printing the array!!!\n");

    // for(int i=0;i<6;i++){
    //     printf("%d\n",arr[i]);
    // }

    // printf("the size of array %ld\n",sizeof(arr)/sizeof(arr[0]));

    
    char *str="hello";
    char *heap_str=(char *)malloc(strlen(str)-1);
    strcpy(heap_str,str);
    printf("The string on the heap %s \n",heap_str);
    free(heap_str);
    struct Person test={
        .name = "testing",
        .age = 2000
    };
    display_person(&test);

}