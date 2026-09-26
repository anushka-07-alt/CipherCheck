#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];

    printf("Enter your password: ");
    scanf("%49s", password);

    printf("\nPassword: %s\n", password);
    printf("Length: %lu\n", strlen(password));

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int specialcharacter = 0;

    // Check password characters
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper((unsigned char)password[i])) {
            upper = 1;
        }
        else if (islower((unsigned char)password[i])) {
            lower = 1;
        }
        else if (isdigit((unsigned char)password[i])) {
            digit = 1;
        }
        else {
            specialcharacter = 1;
        }
    }

    // Calculate score
    int score = 0;

    if (strlen(password) > 12) {
        score++;
    }

    if (upper == 1) {
        score++;
    }

    if (lower == 1) {
        score++;
    }

    if (digit == 1) {
        score++;
    }

    if (specialcharacter == 1) {
        score++;
    }

    // Display analysis
    printf("\n........ PASSWORD ANALYZER .........\n");

    printf("Length: %lu\n", strlen(password));

    if (upper == 1)
        printf("Uppercase: YES\n");
    else
        printf("Uppercase: NO\n");

    if (lower == 1)
        printf("Lowercase: YES\n");
    else
        printf("Lowercase: NO\n");

    if (digit == 1)
        printf("Digit: YES\n");
    else
        printf("Digit: NO\n");

    if (specialcharacter == 1)
        printf("Special character: YES\n");
    else
        printf("Special character: NO\n");

    printf("Score: %d/5\n", score);

    // Determine password strength
    if (score <= 2) {
        printf("Strength: WEAK\n");
    }
    else if (score <= 4) {
        printf("Strength: MEDIUM\n");
    }
    else {
        printf("Strength: STRONG\n");
    }

    return 0;
}
