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

    char nome[50], endereco[50], telefone[14];

printf("Nome: ");
scanf(" %50[^\n]",nome);

printf("Endereco:");
scanf(" %50[^\n]",endereco);

printf("Telefone:");
scanf(" %14[^\n]",telefone);

printf("%s \n %s\n %s\n", nome, endereco, telefone);




}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

void q8() {

    int num1, num2, resultado;

   
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

   
    resultado = num1 - num2;

    
    printf("Resultado da subtração: %d\n", resultado);


}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

void q9() {

float numero, resultado;

    
    printf("Digite um número real: ");
    scanf("%f", &numero);

   
    resultado = numero / 4;

    printf("Um quarto de %.2f é %.2f\n", numero, resultado);

}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q10 () {

float num1, num2, num3, media;

  
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número real: ");
    scanf("%f", &num3);
   
    media = (num1 + num2 + num3) / 3;

    printf("A média aritmética é: %.2f\n", media);



}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

void q11() {

double num1, num2;
    double soma, subtracao, multiplicacao, divisao;

    
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    
    if (num2 != 0) {
        divisao = num1 / num2;
        printf("Divisão: %.2lf\n", divisao);
    } else {
        printf("Divisão: indefinida (divisão por zero)\n");
    }

   
    printf("Soma: %.2lf\n", soma);
    printf("Subtração: %.2lf\n", subtracao);
    printf("Multiplicação: %.2lf\n", multiplicacao);


}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q12() {

double numero, quadrado;


    printf("Digite um número real: ");
    scanf("%lf", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %.2lf é %.2lf\n", numero, quadrado);


}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

void q13() {

double saldo, total;

printf("Digite seu saldo: ");

scanf("%lf", &saldo);

total = saldo + saldo * 0.02;

printf("Seu saldo ajustado sera:%.2lf\n", total);


}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

void q14() {

    double base, altura, perimetro, area;

    printf("Digite a base do retângulo: ");
    scanf("%lf", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%lf", &altura);

    perimetro = base*2 + altura*2;
    area = base * altura;

    printf("Perímetro do retângulo: %.2lf\n", perimetro);
    printf("Área do retângulo: %.2lf\n", area);

}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

void q16() {


double valorProduto, percentualDesconto, valorDesconto, valorFinal;

    printf("Digite o valor do produto: ");
    scanf("%lf", &valorProduto);
    printf("Digite o percentual de desconto: ");
    scanf("%lf", &percentualDesconto);

    valorDesconto = percentualDesconto / 100 * valorProduto;
    valorFinal = valorProduto - valorDesconto;

    printf("Valor do desconto: %.2lf\n", valorDesconto);
    printf("Valor final do produto: %.2lf\n", valorFinal);



}

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
q16();
    return EXIT_SUCCESS;
}