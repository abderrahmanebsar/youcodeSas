#include <stdio.h>

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

    int len,sum = 0;
    
    printf("enter the length of the array : ");
    scanf("%d",&len);

    int arr[len];

    for (int i = 0; i < len ; i++)
    {
        printf("enter the number %d : ",i + 1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < len ; i++)
    {
        sum +=arr[i];
    }

    printf("the sum of the number is : %d", sum);
    
    return 0;
}