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

typedef float arr[5];

int main(){
    character H = 'H';
    
    arr temp = {1.3,20.4,30.2,2.2,4.1};

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
