#include<stdio.h>

void main(){

    int rows,colums;
    for (rows = 1 ; rows <= 6 ; rows++) {
        for(colums = 1 ; colums <= 11 ; colums++) {
            if(colums >= 6-(rows-1) && colums <= 6+(rows-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}