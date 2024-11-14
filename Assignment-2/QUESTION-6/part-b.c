#include <stdio.h>
#include <string.h>
int main(){
    char str1[] = "HELLO";
    char str2[] = "WORLD";

    int length = strlen(str1);
    printf("Length of String 1:%d\n",length);

    int result = strcmp(str1, str2);
    printf("Comparing Str 1 with Str2:%d\n",result);
    /*OUTPUT will be negative since The ASCII value of 'H' (72) is less 
    than 'W' (87), so strcmp("HELLO", "WORLD") returns a negative value, 
    indicating "HELLO" is less than "WORLD".*/

    strcat(str1, str2);
    printf("After concatenating Str 1 and Str 2;Str 1 will be:%s\n",str1);

    strlwr(str1);
    printf("After lowering the str1:%s\n",str1);

    return 0;


}
