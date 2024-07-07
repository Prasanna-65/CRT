#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    int digitCount[10] = {0};

    // Read the input string
    printf("Enter a string: ");
    scanf("%s", input);

    // Count the frequency of each digit
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            digitCount[input[i] - '0']++;
        }
    }

    // Print the frequencies in the required format
    for (int i = 0; i < 10; i++) {
        printf("%d ", digitCount[i]);
    }

    return 0;
}