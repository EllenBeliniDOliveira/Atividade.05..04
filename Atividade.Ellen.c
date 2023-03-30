#include <stdio.h>

char calcularConceito(float media) {
    if (media >= 0.0 && media <= 4.9) {
        return 'D';
    } else if (media >= 5.0 && media <= 6.9) {
        return 'C';
    } else if (media >= 7.0 && media <= 8.9) {
        return 'B';
    } else if (media >= 9.0 && media <= 10.0) {
        return 'A';
    }
}

int main() {
    float nota1, nota2, media;
    
    printf("\nDigite a 1º nota do aluno: ");
    scanf("%f", &nota1);
    
    printf("\nDigite a 2º nota do aluno: ");
    scanf("%f", &nota2);
    
    media = (nota1 * 4 + nota2 * 6) / 10;
    
    printf("\nSua média é: %.1f\n", media);
    
    char conceito = calcularConceito(media);
    
    printf("\nConceito: %c\n", conceito);
    
    return 0;
//Ellen Belini de Oliveira      Mátricula: 202202311448
}

