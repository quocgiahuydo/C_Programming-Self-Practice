#include <stdio.h>

void strcy(char *dst, char *src)
{
    int i = 0;  
    do {
    dst[i] = src[i];
    i++;             // copy characters one byte at a time
}   while (i<400); // until the null terminator is found
}

struct contact {
    char name[100];
    int phone;
    float height; // in meters
};


 struct contact stretchByValue(struct contact c){
    c.height += 3.0;
    strcy(c.name, "Always this name");
    return c;
 }

void stretchByReference(struct contact *cptr){
    cptr->height = 1.2;
    strcy(cptr->name, "Reference name ");
}


int main(){
    char exam[]="Harry";
    

    struct contact George;
    
    George.height = 1.4; // poor fellow has been stooped over George = stretchByValue(George)

    strcy(George.name, "Checking possible");

    George = stretchByValue(George);


    printf("%f\n", George.height);


    printf("%s\n", George.name);

    stretchByReference(&George);

    printf("George height by reference: %f\n", George.height);


    printf("George name by reference: %s\n", George.name);
    
    struct contact c1;

    struct contact classlist[30];//Array of structure ==> Create more number of that structure 

    struct contact *cpt;// Create a pointer of the struct 

    cpt= &classlist[3];
    cpt ->height=1.8;// Access the value in the struct with pointer (cpt ->height =1.8 == *cpt.height=1.8)

    strcy(c1.name, "HarryDo"); 
    strcy(classlist[0].name, "Percy Jackson and the Olympian");// copy the string "Percy Jackson and the Olympian to
    strcy(cpt->name, "New Name");

    c1.phone = 7226993;                                           //  classlist[0].name 
    c1.height = 1.82;                                                   //classlist: the array of struct contact, name: the element from that contact
    
    
    classlist[0].phone=93174953;
    classlist[1].height=2.0;

    printf("Character name starts with %c\n", c1.name[0]);
    printf("Character name is %s\n", c1.name);

    printf("His height is %f\n", c1.height);
    printf("His phone number is %d\n", c1.phone);

    printf("Another of his phone number is %d\n", classlist[0].phone);
    printf("Another height is %f\n", classlist[1].height);

    printf("Another name is %s\n", classlist[0].name);

    printf("Another height of cpt %f\n", cpt->height);
    printf("My name is %s\n", cpt->name);
}