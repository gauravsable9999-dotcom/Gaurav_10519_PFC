#include<stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(j==1||j==9||i==2&&j==2||i==3&&j==3||i==4&&j==4||i==5&&j==5||i==2&&j==8||i==3&&j==7||i==4&&j==6){
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