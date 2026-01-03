#include<stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=7;j++){
            if(i==1||(j==4&&i!=9)||(i==9&&j!=6&&j!=7&&j!=1&&j!=5&&j!=4)||(i==8&&j==1)){
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