#include <stdio.h>

int main() {

    //array 
    int num[] = {1,2,3,4,5,6};
    int len = sizeof(num) / sizeof(num[0]);

    for ( int  i = 0; i < len; i++)
    {
        printf("%d\n",num[i]);
    }
    
}