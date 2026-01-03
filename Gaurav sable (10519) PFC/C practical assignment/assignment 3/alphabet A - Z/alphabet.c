#include<stdio.h>
int main(){
    for(int i=1;i<=10;++i){
        for(int j=10;j>=i;--j){
        printf(" ");
    }
    for(int k=1;k<=(2*i-1);k++){
        if(k==1||k==(2*i-1)||i==6){
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