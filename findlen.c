#include <stdio.h>

//void findLen(int *x){
    //int *ptr;
    //ptr = &x;
    //printf("The value is %d\n", ptr);

    //printf("Size of array x is %lu and size of the first value %lu \n", sizeof(*x), sizeof(int));
    //int len = sizeof(x);
    //printf("The length is %lu\n", sizeof(x));
//}
void Test(int *arr, int len){
    int i =0;
    int count =0;
    while (i<len){
        printf("the value is %d\n",arr[i]);

        count +=1;
        i++;
        printf("The length of this array is %d\n", count);
    }
}

int main(){
    int result;
    int len;
    int age[]={10,20,302,320,3203,32};
    len = sizeof(age)/sizeof(age[0]);
    Test(age,len);
    printf("The address of array : %lu\n", sizeof(age)/sizeof(age[0]) );
    //findLen(*age);
    //result = sizeof(age)/sizeof(age[0]);
    //printf("The result is %d\n",result);

}