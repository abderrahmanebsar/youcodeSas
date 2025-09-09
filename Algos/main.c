#include <stdio.h>


int main(){
    //Challenge 1 : Tri à Bulles

    // int arr[10] = {1,4,7,33,99,9,100,6,76,34};

    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = i; j < 10; j++)
    //     {
    //         if(arr[j] > arr[j + 1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    
    // }


    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d \t",arr[i]);
    // }
    

 
    //Challenge 2 : Tri par Insertion

    int arr[9] = {6,1,7,4,2,9,8,5,3};
    int temp;


    for (int i = 1; i < 9; i++)
    {
        temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        
    }
    
    
    for (int i = 0; i < 9; i++)
    {
        printf("%d \t",arr[i]);
    }
    

    
}