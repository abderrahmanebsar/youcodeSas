#include <stdio.h>

int main() {
    //challnege  1
    // char str[50];

    // printf("enter a string : ");
    // scanf("%s",str);

    // printf("the string you enter is : %s",str);


    //challenge 2

    char str[50];
    int length = 0;

    printf("enter a string : ");
    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++)
    {   
        length++;
    }

    printf("the length of the %s is : %d",str,length);
    

}