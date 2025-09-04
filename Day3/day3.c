#include <stdio.h>

int main() {
    //challnege  1
    // char str[50];

    // printf("enter a string : ");
    // scanf("%s",str);

    // printf("the string you enter is : %s",str);


    //challenge 2

    // char str[50];
    // int length = 0;

    // printf("enter a string : ");
    // scanf("%s",str);

    // for (int i = 0; str[i] != '\0'; i++)
    // {   
    //     length++;
    // }

    // printf("the length of the %s is : %d",str,length);
    

    //challenge 3

    char str1[100];
    char str2[100];
    int i =0, j=0;


    printf("enter the first string : ");
    scanf("%s",str1);

    printf("enter the second string : ");
    scanf("%s",str2);

    while (str1[i] != '\0')
    {
        i++;
    }


    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
    str1[i] = '\0';

    printf("%s",str1);

}