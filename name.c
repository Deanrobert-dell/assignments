#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    // this took me half hour
    name[strcspn(name, "\n")] = 0;
//ihate this
    printf("*.* %s *.*\n", name);
    return 0;
}



