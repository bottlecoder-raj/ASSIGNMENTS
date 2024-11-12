// Program to check for a palindrome string 
// using two pointers
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void isPalindrome(char *str) {
     
      // Index pointer to the start
    int left = 0;
  
    // Index pointer to the end
    int right = strlen(str) - 1;

    // Run the loop till both pointer
    // meet
    while (left < right) {
      
        // If characters don't match,
        // string is not palindrome
        if (str[left] != str[right]) {
            printf("\"%s\" is not palindrome.\n",
               str);
            return;
        }

        // Move both pointers towards
        // each other
        left++;
        right--;
    }

    // If all characters match,
    // string is palindrome
    printf("\"%s\" is palindrome.\n",
               str);
}

int main() {
    
      // Checking if given strings are palindrome
      isPalindrome("madam");
      isPalindrome("hello");
      return 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ISKE NEECHE KA  NAHI LIKHNA!!!!


/*#include<stdio.h>
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
}*/
