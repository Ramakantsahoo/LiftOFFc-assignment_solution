
#include<stdio.h>

int main(){
    int N;
    printf("Enter the order of the matrix : \n");
    scanf("%d", &N);
    int matrix[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i==0 || i==(N-1) || j==0 || j==(N-1)){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}