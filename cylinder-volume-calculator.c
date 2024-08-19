// Volume de um cilindro
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float raio, altura, volume;
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    volume = 3.14 * pow(raio, 2) * altura;
    printf("O volume do cilindro e: %.2f\n", volume);
    return 0;
}