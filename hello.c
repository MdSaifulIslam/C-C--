#include<stdio.h>

int main(void){
    // floyd's Triangle
    int i, j;
    int data;

    for(i = 1; i <= 5; i++){
        data = i % 2;
        for(j = 1; j <= i; j++){
            printf("%d\t", data);
            data = (data - 1) * (-1);
        }
        printf("\n");
    }
}