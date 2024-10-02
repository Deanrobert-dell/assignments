#include <stdio.h>

int num = 999;

int main(){
    if (num < 10){
        printf("this is single digit number\n");
    }else if (num < 100){
        printf("this is a 2 digit number\n");
    }else{
        printf("this is atleast triple digit number\n");
    }
    return 0;
}