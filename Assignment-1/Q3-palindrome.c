#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char reverse[50];
    int j=0,ispalindrome=0;

    //initialization
    printf("Write the word:");
    scanf("%s",&name);

    int l=strlen(name);//finds length of the string
    printf("length:%d\n",l);//yeh line nahi likha toh bhi chalega 
     
    //reversing the word
    
         for(int i=l-1;i>=0;i--){
         reverse[j]=name[i];
         j++;
    }
        printf(" reversed:%s\n",reverse);//yeh line nahi likha toh bhi chalega 

        

    //check if palindrome  
        for(int m=0;m<l;m++){
            if(name[m]==reverse[m]){
                ispalindrome=0;
            }
            else{
                ispalindrome=1;
                break;
            }
        }
        if(ispalindrome==0){
            printf("PALINDROME!");
        }
        else{printf("NOT PALINDROME!");}

    return 0;
}