//Baseado na tabela de IR. Faça o calculo do disconto do usuário e mostrar se ele é isento

#include <stdio.h>

int main() {
    float salario, desc;
    
    printf("Digite seu salário como o exemplo (1043.98): ");
    scanf("%f", &salario); // lê e armazena o valor do salário 
    
    if ((salario >= 2259.21) && (salario <= 2826.65)) {
        desc = salario * (7.5 / 100); // Calcula 7,5% do salário
        printf("O salário terá um desconto de 7,5%%.\nO valor descontado será R$: %.2f", desc);
        printf("\nO salário após o desconto será R$: %.2f", salario - desc);
    }
    else if((salario>=2826.66)&&(salario<=3751.05)){
        desc=salario*(15.0/100); // Cálculo de 15,0 do salário 
        printf("O salário terá um desconto de 15,0%%.\nO valor descontado será R$: %.2f", desc);
        printf("\nO salário após o desconto será R$: %.2f", salario - desc);
    }
    else if((salario>=3751.06)&&(salario<=4664.68)){
        desc=salario*(22.5/100); // Cálculo de 22,5% do salário 
        printf("O salário terá um desconto de 22,5%%.\nO valor descontado será R$: %.2f", desc);
        printf("\nO salário após o desconto será R$: %.2f", salario - desc);
    }
    else if(salario > 4664.68){
        desc=salario*(27.5/100); // Cálculo de 27,5% do salário
        printf("O salário terá um desconto de 27,5%%.\nO valor descontado será R$: %.2f", desc);
        printf("\nO salário após o desconto será R$: %.2f", salario - desc);
    }
    else{ //se o salário é menor que os anteriores, o usuário é isento
        printf("Desconto: R$ %.2f.\nUsuario isento do desconto de imposto de renda ",desc);
    }
    return 0;
}
