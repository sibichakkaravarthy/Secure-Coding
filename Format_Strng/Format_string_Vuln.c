#include <stdlib.h>
#include <stdio.h>

#include <sys/mman.h>

void createSecret(char *secret) {
    sprintf(secret, "Y0u_f0und_th3_s3cr3t_key");
}

void vuln(char *input) {
    printf(input);
}

int main(int argc, char **argv) {
    char input[50];

    printf("Can you guess the secret key?\n");

    char *secret = malloc(25);
    createSecret(secret);

    fgets(input, 50, stdin);
    vuln(input);
}