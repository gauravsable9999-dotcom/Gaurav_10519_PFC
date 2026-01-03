#include<stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=5;j++){
            if(i==1||j==3||i==9){
                printf("  *");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}