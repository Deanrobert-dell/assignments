#include <stdio.h>

int main() {
    char noun[100];
    char p_verb[100];
    char noun2[100];

    printf("Choose a noun: ");
    scanf("%s", noun);
    printf("Choose a verb: ");
    scanf("%s", p_verb);
    printf("Choose a noun: ");
    scanf("%s", noun2);

    printf("lick your %s and it will %s you, use your %s to block it\n", noun, p_verb, noun2);

    return 0;
}

