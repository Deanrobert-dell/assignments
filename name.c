#include <stdio.h>

int main() {
    char name[100];
    
    printf("insert name\n");
    scanf("%99s", name);
    printf("<<< %s >>>\n", name);
    
    return 0;
}

