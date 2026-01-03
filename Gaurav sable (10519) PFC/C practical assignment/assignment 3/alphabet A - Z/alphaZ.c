#include<stdio.h>
int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=13;j++){
            if((i==1)||(i==7)||(i==2&&j==11)||(i==3&&j==9)||(i==4&&j==7)||(i==5&&j==5)||(i==6&&j==3)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}