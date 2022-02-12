

#include<stdio.h>

int main(){
    int x;

    printf("Enter the number here : ");
    scanf("%d", &x);

    switch (x%2)
    {
    case 0:
        printf("%d is even.", x);
        break;
    
    default:
        printf("%d is odd.", x);
        break;
    }
    
    return 0;
}