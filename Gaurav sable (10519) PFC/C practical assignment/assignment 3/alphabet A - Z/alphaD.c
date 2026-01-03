#include<stdio.h>
int main(){
    for(int i=1;i<=8;i++){
       for(int j=1;j<=7;j++){
        if(j==1||(i==1&&j!=6&&j!=7)||(i==2&&j==6)||(i==3&&j==7)||(i==4&&j==7)||(i==5&&j==7)||(i==6&&j==7)||(i==8&&j!=6&&j!=7)||(i==7&&j==6)){
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