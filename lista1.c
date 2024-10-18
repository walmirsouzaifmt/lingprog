#include <stdio.h>
#include <stdlib.h>


/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.

void q1() { 
    printf("walmir M Souza!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.

void q2() {
printf("30*27 = %d\n", 30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.

void q3() {
    float media = (5+8+12)/3.0;
    printf("media de 5,8,12 é iglal a %.f\n" ,media);
}
//4. Faça um programa que leia e imprima um número inteiro.

void q4() {

    int num = 0;
    printf("Digite um valor numérico inteiro: ");
    scanf("%d", &num);
    printf("O valor digitado foi: %d\n", num);

}
//5. Faça um programa que leia dois números reais e os imprima.

void q5() {

    float num1, num2;

   
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);
    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    printf("Você digitou: %.2f e %.2f\n", num1, num2);

}


//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.

void q6() {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.

void q7() {

char nome[100];
    char endereco[200];
    char telefone[15];

    // Leitura dos dados do cliente
    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o endereço do cliente: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite o telefone do cliente: ");
    fgets(telefone, sizeof(telefone), stdin);

    // Impressão dos dados do cliente
    printf("\nDados do Cliente:\n");
    printf("Nome: %s", nome);
    printf("Endereço: %s", endereco);
    printf("Telefone: %s", telefone);

}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

void q8() {

    int num1, num2, resultado;

    // Leitura dos números
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Cálculo da subtração
    resultado = num1 - num2;

    // Impressão do resultado
    printf("Resultado da subtração: %d\n", resultado);


}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

void q9() {

float numero, resultado;

    // Leitura do número real
    printf("Digite um número real: ");
    scanf("%f", &numero);

    // Cálculo de ¼ do número
    resultado = numero / 4;

    // Impressão do resultado
    printf("Um quarto de %.2f é %.2f\n", numero, resultado);

}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q10 () {

float num1, num2, num3, media;

    // Leitura dos três números reais
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número real: ");
    scanf("%f", &num3);

    // Cálculo da média aritmética
    media = (num1 + num2 + num3) / 3;

    // Impressão do resultado
    printf("A média aritmética é: %.2f\n", media);



}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.


int main() {
q10();
    return EXIT_SUCCESS;
}