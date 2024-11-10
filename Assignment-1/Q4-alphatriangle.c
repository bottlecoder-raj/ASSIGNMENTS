#include <stdio.h>

int main() {
    
 
   int n=5;
   
   for(int z=1;z<=n;z++)//for each line
   {
   for(int x=n;x>z;x--){//spaces
       printf("\t");
   }
       
   for(int i=1;i<z;i++){
       printf("%c\t",64+i); //for ascending
   }
   for(int j =z-2;j>=1;j--){
       printf("%c\t",64+j); //for descending
   }
   printf("\n");//next line
   }

    return 0;
}