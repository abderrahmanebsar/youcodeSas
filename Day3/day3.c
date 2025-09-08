#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

    // char str1[100];
    // char str2[100];
    // int i = 0, j = 0;


    // printf("enter the first string : ");
    // scanf("%s",str1);


    // printf("enter the second string : ");
    // scanf("%s",str2);


    // while (str1[i] != '\0'){
    //     i++;
    // }

    // while (str2[j] != '\0') {
    //     str1[i] = str2[j];
    //     i++;
    //     j++;
    // }
    

    // str1[i] = '\0';

    // printf("the marges string is : %s",str1);


    //challenge 4

    // char str1[100];
    // char str2[100];
    // bool isdifferent = false;
    // int i =0;


    // printf("enter the first string : ");
    // scanf("%s",str1);


    // printf("enter the second string : ");
    // scanf("%s",str2);


    // for (int i = 0; i < strlen(str1); i++)
    // {
    //     if(str1[i] != str2[i]) {
    //         isdifferent = true;
    //     }
    // }

    // while(str1[i] != '\0' && str2[i] != '\0' ){
    //     if(str1[i] != str2[i]) {
    //         isdifferent = true;
    //         break;
    //     }
    //     i++;
    // }

    // if (isdifferent)
    // {
    //    printf("the two string are different ");
    // }else{
    //     printf("the two string are the same");
    // }
    


    //challenge 5

    // char str[100];
    // char reverse[100];
    // int len,j,i;
    

    // printf("enter the string : ");
    // scanf("%s",str);

    // len = strlen(str);


    // for (i = len - 1,j = 0; i >= 0 ; i--,j++)
    // {
    //     reverse[j] = str[i];
    // }

    // reverse[j] = '\0';
    
    // printf("the  reverse string is : %s\n", reverse);

    //challenge 6

    // char str[100];
    // char chrct;
    // int i =0,count=0;

    // printf("enter a string : ");
    // scanf("%s",str);

    // printf("enter the character : ");
    // scanf(" %c",&chrct);

    // while(str[i] != '\0'){
    //     if(str[i] == chrct){
    //         count++;
    //     }
    //     i++;
    // }

    // printf("the count of the character %c is : %d",chrct,count);

    //challenge 7 

    // char str[100];
    // int i = 0;
    // char uppstr[100];

    // printf("enter the string : ");
    // scanf("%s",str);

    // while (str[i] != '\0')
    // {
    //    uppstr[i] = str[i] - 32;
    //    i++;
    // }

    //uppstr[i] = '\0';
    

    // printf("the uppercse string is : %s",uppstr);


    //challenge 8


    // char str[100];
    // int i = 0;
    // char lowercs[100];

    // printf("enter the string : ");
    // scanf("%s",str);

    // while (str[i] != '\0')
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         lowercs[i] = str[i] + 32;
    //     }else{
    //         lowercs[i] = str[i];
    //     }
    //    i++;
    // }
    
    // lowercs[i]='\0';

    // printf("the uppercse string is : %s",lowercs);


    char str[100];
    int i = 0, len = 0;

    printf("enter the string : ");
    fgets(str,20,stdin);


    while (str[i] != '\0')
    {
        if(str[i] != '\n'){
          len++; 
        }
        i++; 
    }

    for (int i = 0; i < len;)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < len ; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
            
        }else{
            i++;
        }
        
    }
    

    printf("the length of str is : %s",str);
    
    
    

    
    
}