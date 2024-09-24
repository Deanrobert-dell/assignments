#include <stdio.h>

void say_hello(const char *name) {
    printf("Hello, %s!\n", name);
}

int main() {
    // Calling the function with different names
    say_hello("Alice");
    say_hello("Bob");
    say_hello("grazzilda");
    say_hello("deaan");
    say_hello("joe");
    
    return 0;
}

