#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char numbers[100][100];

void calculate(int totalNumbers) {
    int actElement = 0;
    double plus = 0;
    while (actElement != totalNumbers) {
        plus = plus + atof(numbers[actElement]);
        actElement++;
    }   
    printf("Media: %.2lf", plus / totalNumbers);
}
int main() {
    int actNumber = 0;
    printf("Digite os numeros para o calculo da media (Enter sem nenhum numero iniciara a proxima etapa)\n");
    while (1) {
        fgets(numbers[actNumber], 100, stdin);
        if(strcmp(numbers[actNumber], "\n") == 0) {
            break;
        }
        actNumber++;
    }
    calculate(actNumber);
    return 0;
}
