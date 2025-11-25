#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin); // Read full name including spaces

    // Print first character as initial
    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }

    while (str[i]) {
        // Check for space, then print next character
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            printf("%c.", str[i+1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
