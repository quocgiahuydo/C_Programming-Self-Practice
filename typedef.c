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

typedef int* ptr;

int main(){
    character H = 'H';

    ptr testing;
    *testing= 30; 
    
    printf("testing typedef: %c\n", H);

    printf("value of pointer %d\n", *testing);
    
    info *cpt;

    info classlist[300];

    info George;

    George.phone_number=+84931749553;


    cpt = &classlist[0];
    
    strcy( cpt->name,"Testing Name");
    
    printf("Testing the name: %s\n", cpt->name);
    printf("George's phone number %ld\n",George.phone_number );
}
