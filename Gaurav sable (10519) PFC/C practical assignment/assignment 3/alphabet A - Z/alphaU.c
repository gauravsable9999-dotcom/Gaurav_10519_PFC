#include<stdio.h>
int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=5;j++){
            if((j==1&&i!=7)||(j==5&&i!=7)||(i==7&&j!=1&&i!=5)&&(i==7&&j!=5&&j!=1)){
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}