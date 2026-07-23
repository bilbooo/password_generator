#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define SET_DIM 4
#define MAX_PASS_LENGTH 255

#define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
#define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DIGITS "0123456789"
#define SPECIAL_CHARS "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"

#define LOWERCASE_LEN 26
#define UPPERCASE_LEN 26
#define DIGITS_LEN 10
#define SPECIAL_CHARS_LEN 32


char *generator(size_t length) {
    
    if (length == 0 || length > MAX_PASS_LENGTH) {
        fprintf(stderr, "Chosen length is too big. Try something shorter.\n");
        return NULL;
    }

    char *password = malloc((length + 1) * sizeof(char));

    if (password == NULL) {
        fprintf(stderr, "Error, failed memory allocation. The program terminates here.\n");
        return NULL;
    }

    const char *chars_set[SET_DIM] = {LOWERCASE, UPPERCASE, DIGITS, SPECIAL_CHARS};
    const uint8_t lengths_set[SET_DIM] = {LOWERCASE_LEN, UPPERCASE_LEN, DIGITS_LEN, SPECIAL_CHARS_LEN};

    for (uint8_t i = 0; i < (uint8_t)length; i++) {
        uint8_t chosen_set = rand() % SET_DIM;
        uint8_t index = rand() % lengths_set[chosen_set];
        password[i] = chars_set[chosen_set][index];
    }

    password[length] = '\0';

    return password;
}


int main(void) {

    srand(time(NULL));
    unsigned int len;
    printf("Insert the length of the password: ");
    if (scanf("%u", &len) != 1) {
        fprintf(stderr, "Error: you have to insert a valid number.\n");
        return 1;
    }

    char *generated_password = generator(len);

    if (generated_password != NULL) {
        printf("Password generata: %s\n", generated_password);

        free(generated_password);
    }

    return 0;
}