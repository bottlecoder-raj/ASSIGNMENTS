#include<stdio.h>

void call_by_value(int x){
     x=x+1;
     printf("Inside call_by_value:%d\n",x);

}
void call_by_reference(int *x){
     *x=*x+1;
     printf("Inside call_by_reference:%d\n",*x);

}


int main(){
    int a=10;
    printf("original value:%d\n",a);
    call_by_value(a);
    printf("outside call_by_value:%d\n",a);
    call_by_reference(&a);
    printf("outside call_by_reference:%d\n",a);
    return 0;

}
