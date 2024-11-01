#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char array[100][50] = {};
char endCommand[] = "end\n";

void calculate(int sizeOfArray) {
    int actNumber = 0;
    long int plus = 0;
    long int mean;
    
    while(actNumber != sizeOfArray) {
        plus += atol(array[actNumber]);
        actNumber++;

    }
    mean = plus / sizeOfArray;
    printf("A média é: %ld", mean);

}
int main() {
    int actNumber = 0;
    printf("Digite os valores números para a calculação da média (Digite \"end\" para avançar)\n");
    while (1) {
        fgets(array[actNumber],50,stdin);
        while (strcmp(array[actNumber], "\n") == 0) {
            printf("O programa não recebeu nenhum número, escreva-o novamente:\n");
            fgets(array[actNumber],50,stdin);
        }

        if (strcmp(array[actNumber], endCommand) == 0) {
            break;
        }
        actNumber++;

    }

    calculate(actNumber);

    return 0;
}
