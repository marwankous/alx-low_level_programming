#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_password() {
    const char* charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const int len = 12;
    char password[len+1];
    srand(time(NULL));
    for (int i = 0; i < len; i++) {
        password[i] = charset[rand() % 62];
    }
    password[len] = '\0';
    printf("%s\n", password);
}

int main() {
    generate_password();
    return 0;
}
