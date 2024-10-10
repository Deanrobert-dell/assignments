#include <stdio.h>
int i;
int usr;
int main(){
    printf("give me a number");
    scanf("%d", &usr);
    //loopcounts 50
    for(i=1;i<=usr;i++){

        if(i%3==0 && i%5==0){
            printf("Fizzbuzz\n");
        }else if (i%3==0){

            printf("fizZ\n");
        
        }else if(i%5==0){
            printf("buzz\n");


        }else{
        printf("%d\n",i);
        }
    }
    
    return 0;

}