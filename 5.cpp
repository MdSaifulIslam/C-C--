#include<stdio.h>

int main(void){
    // 6. asterisk pyramid
    int i, j, k;
    int n = 7;

    for(i = 0; i < n; i++){
        for(k = i + 1; k < n ; k++){
            printf(" ");
        }    
        for(j = 1; j <= (2*i + 1); j++){
            printf("*");
        }
        printf("\n");
    }
}