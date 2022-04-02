#include<stdio.h>

void main(){

    int rows,colums,i;
    printf("Enter the height of the pyramide: ");
    scanf(" %d",&rows);
    for (i = 1 ; i <= rows ; i++) {
        for(colums = 1 ; colums <= (rows*2)-1 ; colums++) {
            if(colums >= rows-(i-1) && colums <= rows+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}