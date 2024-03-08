#include <stdio.h>


void strcy(char *dst, char *src){
    int i=0;
    do{
        dst[i]=src[i];
        i++;
    }
    while (i<200&& src[i]!='\0' );

}

typedef struct contact{
    char name[200];
    long int phone_number;
    float height;
} info;






typedef char character; 

typedef int *ptr; 

typedef float arr[];

int main(){
    character H = 'H';
    
    arr temp = {2,3,4,5,66,2,23,32,3};

    printf("The first value is %f\n", temp[0]);
    int i =0;
    while (i<5){
        printf("The value in the aray is %f\n", temp[i]);
        i++;
    }
    
    
    int value = 30;
    
    ptr var; 

    var= &value;

    
    printf("testing typedef: %c\n", H);

    printf("Value of var is %d\n", *var);
    
    info *cpt;

    info classlist[300];

    info George;

    George.phone_number=+84931749553;


    cpt = &classlist[0];
    
    strcy( cpt->name,"Testing Name");
    
    printf("Testing the name: %s\n", cpt->name);
    printf("George's phone number %ld\n",George.phone_number );
}
