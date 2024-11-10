#include<stdio.h>
int main(){
    
    int num[10]={2,5,4,6,7,8,3,1,9,10};

    for(int i=0;i<10;i++){
       for(int j=1;j<10;j++){
           if(num[j-1]<num[j]){
            int temp=num[j];
            num[j]=num[j-1];
            num[j-1]=temp;
           }

       }

    }
    printf("Array in descending order\n");
    for(int k=0;k<10;k++){
        printf("%d ",num[k]);
    }
   

    return 0;
}