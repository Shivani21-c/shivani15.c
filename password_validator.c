#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to validate the password
int isValidPassword(const char *password) {
int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

// Password length check
if (strlen(password) < 8) {
return 0;  // Invalid: Password is too short
}
// Check each character in the password
for (int i = 0; password[i] != '\0'; i++) {
if (isupper(password[i])) {
hasUpper = 1;
} else if (islower(password[i])) {
hasLower = 1;
} else if (isdigit(password[i])) {
hasDigit = 1;
} else if (ispunct(password[i])) {
hasSpecial = 1;
}
}
// All conditions must be met for a valid password
if (hasUpper && hasLower && hasDigit && hasSpecial) {
return 1;  // Valid password
}
return 0;  // Invalid password
}

int main() {
char password[100];  // Array to store the password
// Prompt the user to enter a password
printf("Enter your password: ");
scanf("%s", password);  // Read password from user input
// Validate the password
if (isValidPassword(password)) {
printf("Password is valid.\n");
} else {
printf("Password is invalid. It must:\n");
printf("- Be at least 8 characters long.\n");
printf("- Contain at least one uppercase letter.\n");
printf("- Contain at least one lowercase letter.\n");
printf("- Contain at least one digit.\n");
printf("- Contain at least one special character (e.g., @, #, $, etc.).\n");
}
return 0;
}
