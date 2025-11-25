#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin); // Read full name including spaces

    // Print first character as initial
    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }

    while (str[i]) {
        // If space found and next is not end, print next character as initial
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            // Check if this is the last word
            int j = i+1, isLast = 1;
            while (str[j]) {
                if (str[j] == ' ') {
                    isLast = 0; // Not last word
                    break;
                }
                j++;
            }
            if (isLast) {
                // Print full last word
                printf(" ");
                while (str[i+1] != '\0' && str[i+1] != '\n') {
                    i++;
                    printf("%c", str[i]);
                }
                break;
            } else {
                printf("%c.", str[i+1]);
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
