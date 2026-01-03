#include<stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=6;j++){
            if((i==1&&j!=1&&j!=6)||(i==5&&j!=1&&j!=6)||((i==2&&j==1||j==6&&i==2))||(i==3&&j==1)||(i==4&&j==1)||(i==6&&j==6)||(i==7&&j==6)||((i==8&&j==6||j==1&&i==8))||(i==9&&j!=6&&j!=1)){
              printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}