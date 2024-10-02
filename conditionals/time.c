#include <stdio.h>
#include <time.h>

int hour;

int main()
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime (&rawtime);
    printf("Current local time and date: %s", asctime(timeinfo));
    printf("tell me our in military time:\n");
    scanf("%d", &hour);
    if (hour< 12 ){
        printf("good morning\n");
    }else if (hour < 18){
        printf("good afternoon\n");
    }else{
        printf("goodevening\n");
    }
    return 0;
}








