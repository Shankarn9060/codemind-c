#include <stdio.h>    
int main()    
{    
    int x,i;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);    
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d
", arr[j]);    
        }    
    }    
    return 0;    
}