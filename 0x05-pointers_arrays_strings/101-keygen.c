#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 15

void generate_password(char *password) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i, random_index;
    srand(time(NULL));
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        random_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[random_index];
    }
    password[PASSWORD_LENGTH] = '\0';
}

int main() {
    char password[PASSWORD_LENGTH + 1];
    do {
        generate_password(password);
    } while (strcmp(password, "Tada! Congrats") != 0);
    printf("%s\n", password);
    return 0;
}

