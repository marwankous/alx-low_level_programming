#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomPasswordGeneration() {
  const char numbers[] = "0123456789";
  const char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
  const char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const char symbols[] = "!@#$%^&*()_-+={}[]\\|:;\"'<>,.?/";

  const int N = 10;
  char password[N + 1];
  int i, rand_num;

  srand(time(NULL));

  for (i = 0; i < N; i++) {
    rand_num = rand() % 4;
    switch (rand_num) {
      case 0:
        password[i] = numbers[rand() % strlen(numbers)];
        break;
      case 1:
        password[i] = lowercase[rand() % strlen(lowercase)];
        break;
      case 2:
        password[i] = uppercase[rand() % strlen(uppercase)];
        break;
      case 3:
        password[i] = symbols[rand() % strlen(symbols)];
        break;
    }
  }

  password[N] = '\0';
  printf("%s", password);
}

/**
 * main - generates a valid password for 101-crackme
 *
 * Return: Always 0
 */

int main()
{
	int N = 10;

	randomPasswordGeneration(N);

	return 0;
}
