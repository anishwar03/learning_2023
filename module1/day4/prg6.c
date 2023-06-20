#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toggleStringCase(char str[]) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]); // Convert lowercase to uppercase
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]); // Convert uppercase to lowercase
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    toggleStringCase(str);

    printf("Toggled string: %s\n", str);

    return 0;
}
