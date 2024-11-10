#include<stdio.h>
void digit( int digit){
    switch(digit){
       case 0:
       printf("Zero ");
       break;

       case 1:
       printf("One ");
       break;

       case 2:
       printf("Two ");
       break;

       case 3:
       printf("Three ");
       break;
       
       case 4:
       printf("Four ");
       break;

       case 5:
       printf("Five ");
       break;

       case 6:
       printf("Six ");
       break;

       case 7:
       printf("Seven ");
       break;

       case 8:
       printf("Eight ");
       break;

       case 9:
       printf("Nine ");
       break;
       
       
    }
    

}
int main(){
   int num,m,reversed;
   printf("Enter the number:");
   scanf("%d",&num);
   
   //reversing the number
    while (num != 0) {
         int remainder = num % 10;         // Extract the last digit
        reversed = reversed * 10 + remainder;  // Build the reversed number
        num /= 10;                    // Remove the last digit from num
    }
    m=reversed;

   while(m%10 !=0)
   {
     int r=m%10;
     digit(r);
     m=m/10;
   }
   
   return 0;
}