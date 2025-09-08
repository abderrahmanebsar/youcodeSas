#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct Book
{
    char title[100];
    char author[100];
    int year;
};

struct Book createBook(const char *title, const char *author, int year) {
    struct Book b;


    strncpy(b.title, title, sizeof(b.title) - 1);
    b.title[sizeof(b.title) - 1] = '\0';

    strncpy(b.author, author, sizeof(b.author) - 1);
    b.author[sizeof(b.author) - 1] = '\0';

    b.year = year;

    return b;
}

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

    // printf("the lower string is : %s",lowercs);


    //challenge 9
    // char str[100];
    // int i = 0, len = 0;

    // printf("enter the string : ");
    // fgets(str,20,stdin);


    // while (str[i] != '\0')
    // {
    //     if(str[i] != '\n'){
    //       len++; 
    //     }
    //     i++; 
    // }

    // for (int i = 0; i < len;)
    // {
    //     if (str[i] == ' ')
    //     {
    //         for (int j = i; j < len ; j++)
    //         {
    //             str[j] = str[j + 1];
    //         }
    //         len--;
            
    //     }else{
    //         i++;
    //     }
        
    // }
    

    // printf("the length of str is : %s",str);


 //challenge 10


//  char str[100];
//  char word[50];
//  int i,j,found = 0;


// printf("enter the sentence: ");
// fgets(str,20,stdin);

// printf("enter the word: ");
// scanf("%s",word);


// for (i = 0; str[i] != '\0'; i++)
// {
//     for (j = 0; word[j] != '\0'; j++)
//     {
//         if (str[i + j] != word[j])
//         {
//             break;
//         }
//     }

//     if (word[j] == '\0') 
//     {
//         found = 1;
//         break;
//     }
// } 

// if (found)
// {
//     printf("Substring found\n");
// }else{
//     printf("Substring not found\n");
// }


//struct

//chllenge 1

// struct person
// {
//     char name[100];
//     char lastname[100];
//     int age;
// };

// struct person p;

// printf("enter the your name : ");
// scanf("%s",p.name);

// printf("enter the your last name : ");
// scanf("%s",p.lastname);

// printf("enter the your age : ");
// scanf("%d",&p.age);

// printf("name : %s\n",p.name);
// printf("last name : %s\n",p.lastname);
// printf("age : %d\n",p.age);


//chllenge 2

// struct student
// {
//     char firstname[100];
//     char lastname[100];
//     int grade[100];
// };


// struct student stud;

// strcpy(stud.firstname, "abderrahmane");
// strcpy(stud.lastname, "bsar");
// stud.grade[0] = 11;
// stud.grade[1] = 20;
// stud.grade[2] = 15;
// stud.grade[3] = 13;
// stud.grade[4] = 19;

// printf("your first name is : %s\n",stud.firstname);
// printf("your last name is : %s\n",stud.lastname);
// printf("the grade : \n");

// for (int i = 0; i < 5; i++)
// {
//     printf("%d\n",stud.grade[i]);
// }
// printf("\n");


//challenge 4

// struct Point
// {
//     int x;
//     int y;  
// };

// struct Point point;
// struct Point *p = &point;

// p = (struct Point*) malloc(sizeof(struct Point));

// if (p == NULL)
// {
//     printf("memory allocation failed\n");
// }


// p->x = 10;
// p->y = 20;

// free(p);

// printf("Pont coordinates : x = %d, y = %d\n",p->x,p->y);


//Challenge 5

struct Book mybook = createBook("cna't hurt me ","dived gagen",2001);

printf("the book title : %s\n",mybook.title);
printf("the book author : %s\n",mybook.author);
printf("the book year : %d\n",mybook.year);






    
    
}