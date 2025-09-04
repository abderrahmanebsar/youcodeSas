#include <stdio.h>
#include <stdbool.h>
int main() {

    //array 
    //challenge 1
    // int num[] = {1,2,3,4,5,6};
    // int len = sizeof(num) / sizeof(num[0]);

    // for ( int  i = 0; i < len; i++)
    // {
    //     printf("%d\n",num[i]);
    // }


    //challenge 2

//     int len;
//     printf("enter the size of the array : ");
//     scanf("%d",&len);

//     int arr[len];

//     for (int i = 0; i < len;i++){
//         printf("enter the number  %d : ",i +1);
//         scanf("%d",&arr[i]);
//     }

//    for ( int  i = 0; i < len; i++)
//     {
//         printf("%d\n",arr[i]);
//     }

    //challenge 3

    // int len,sum = 0;
    
    // printf("enter the length of the array : ");
    // scanf("%d",&len);

    // int arr[len];

    // for (int i = 0; i < len ; i++)
    // {
    //     printf("enter the number %d : ",i + 1);
    //     scanf("%d",&arr[i]);
    // }
    
    // for (int i = 0; i < len ; i++)
    // {
    //     sum +=arr[i];
    // }

    // printf("the sum of the number is : %d", sum);
    
    //challenge
    //return 0;


    //challenge 4

    // int len,max;
    
    // printf("enter the length of the array : ");
    // scanf("%d",&len);

    // int arr[len];

    // for (int i = 0; i < len ; i++)
    // {
    //     printf("enter the number %d : ",i + 1);
    //     scanf("%d",&arr[i]);
    // }
    
    
    // max = arr[0];
    // for (int i = 1; i < len ; i++)
    // {
    //     if (arr[i] > max){
    //         max = arr[i];
    //     }
    // }

    // printf("the the largest number is  : %d", max);

    //challenge 9

    // int len;
    // printf("enter the size of the array : ");
    // scanf("%d",&len);

    // int arr[len];

    // for (int i = len - 1  ; i >= 0 ;i--){
    //     printf("enter the number  : ");
    //     scanf("%d",&arr[i]);
    // }

    // for ( int  i = 0; i < len; i++)
    // {
    //     printf("%d\n ",arr[i]);
    // }


    //challenge 7 

        // int len;
        
        // printf("enter the length of the array : ");
        // scanf("%d",&len);
    
        // int arr[len];
    
        // for (int i = 0; i < len ; i++)
        // {
        //     printf("enter the number %d : ",i + 1);
        //     scanf("%d",&arr[i]);
        // }


        // for (int  i = 0; i < len; i++)
        // {
        //     for (int j = i + 1; j < len ; j++)
        //     {
        //     if (arr[i] < arr[j]){
        //         int temp = arr[i];
        //         arr[i] = arr[j];
        //         arr[j] = temp;
        //     }
        //     }
        // }

        // for ( int  i = 0; i < len; i++)
        // {
        //     printf("%d\n ",arr[i]);
        // }
    

        //challenge 8

        // int arr[] = {1,2,3,4,6};
        // int arr2[5];
        // int len = 5;

        // for (int i = 0; i < len; i++)
        // {
        //     arr2[i] = arr[i] ;
        // }
        
        // printf("this the first array : \n");

        // for (int i = 0; i < len; i++)
        // {
        //     printf("%d ,",arr[i]);
        // }

        // printf("\n");
        // printf("this the copyed array : \n");

        // for (int i = 0; i < len; i++)
        // {
        //     printf("%d ,",arr2[i]);
        // }
        

        //challenge 10

        // int len;
        // bool isdispo = false;
        // int numbf;
        
        // printf("enter the length of the array : ");
        // scanf("%d",&len);
    
        // int arr[len];
    
        // for (int i = 0; i < len ; i++)
        // {
        //     printf("enter the number %d : ",i + 1);
        //     scanf("%d",&arr[i]);
        // }
        
        // printf("the element that you're searching for : ");
        // scanf("%d",&numbf);

        // for (int i = 0; i < len; i++)
        // {
        //     if (arr[i] == numbf){
        //         isdispo = true;
        //         break;
        //     }
        // }


        // if (isdispo) {
        //     printf("the number %d that you're looking for is here");
        // }else {
        //   printf("the number %d that you're looking for is not here"); 
        // }


        //the boucle
        //challenge 2

        // for (int i = 0; i < 8; i++)
        // {
        //     for(int j = 0;i < 7;i++){
        //         printf(" ");
        //     }
        //     printf("*");

        //     for(int j = 0;i < 7;i++){
        //         printf(" ");
        //     }
        // }


        //challenge 11

        int len;

        printf("enter the length of the array : ");
        scanf("%d",&len);


        int arr[len];
        int searchnumbre,replacnum;
        

        for (int i = 0; i < len; i++)
        {
           printf("enter the number %d : ",i + 1);
           scanf("%d",&arr[i]); 
        }
        


        printf("entre the number you want to replce : ");
        scanf("%d",&searchnumbre);

        printf("enter the new number you want replace with : ");
        scanf("%d",&replacnum);

        for (int i = 0; i < len; i++)
        {
            if (arr[i] == searchnumbre)
            {
                arr[i] = replacnum;
            }
            
        }

        
        for (int i = 0; i < len; i++)
        {
            printf("%d  ",arr[i]);
        }
        
        


}