#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int digitCount[10] = {0}; // Initialize an array to store the frequency of digits (0-9)

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            // If the character is a digit, increment the corresponding count in the array
            int digit = str[i] - '0'; // Convert the character to an integer
            digitCount[digit]++;
        }
    }

    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            printf("%d ", digitCount[i]);
        }
    }

    return 0;
}
