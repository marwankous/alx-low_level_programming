#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

void generate_password() {
    const char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char password[PASSWORD_LENGTH + 1];
    int i;
    srand(time(NULL));
    password[0] = 'A';
    for (i = 1; i < PASSWORD_LENGTH - 1; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH - 1] = 'q';
    password[PASSWORD_LENGTH] = '\0';
    printf("%s\n", password);
}

int main() {
    generate_password();
    return 0;
}

