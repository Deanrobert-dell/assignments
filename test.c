

int main(void) {
    char name[50]; // Buffer to store the user's name, adjust size as needed

    // Prompt the user for their name
    printf("What's your name? ");

    // Read the user's input
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline character if present
    name[strcspn(name, "\n")] = '\0';

    // Print a greeting with the user's name
    printf("Hello, %s!\n", name);

    return 0;
}
