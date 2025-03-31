#include <stdio.h>
#include <math.h>

void method_0511(){
    int n, soma=0;
    printf("\nquantos multiplos de 3 voce deseja? ");
    scanf("%d", &n);
    printf("\n");
    for(int i=0; i<n; i++){
        soma=soma+3;
        if(i<n-1){
            printf("%d, ", soma);
        } else{
            printf("%d.", soma);
        }
    }
    printf("\n");
}

void method_0512(){
    int n, soma=0;
    printf("\nquantos multiplos de 3 e 5 voce deseja? ");
    scanf("%d", &n);
    printf("\n");
    for(int i=0; i<n; i++){
        do{
            soma=soma+5;
        } while(soma%3!=0);

        if(i<n-1){
            printf("%d, ", soma);
        } else{
            printf("%d.", soma);
        }
    }
    printf("\n");
}

void method_0513(){
    int n, soma=1, cont=0;
    printf("\nquantos potencias de 4 voce deseja? ");
    scanf("%d", &n);
    printf("\n");
    for(int i=0; i<n; i++) {
        soma = soma*4;
    }
    for(int i=0; i<n; i++){
        if(i<n-1){
            printf("%d, ", soma);
        } else{
            printf("%d.", soma);
        }
        soma = soma/4;
    }
    printf("\n");
}

void method_0514(){
    int n, soma=0;
    printf("\nquantos multiplos de 3 voce deseja? ");
    scanf("%d", &n);
    printf("\n");
    for(int i=0; i<n; i++){
        soma=soma+3;
        if(i<n-1){
            printf("1/%d, ", soma);
        } else{
            printf("1/%d.", soma);
        }
    }
    printf("\n");
}

void method_0515(){
    float x;
    int n;
    printf("digite o valor de x: ");
    scanf("%f", &x);
    printf("digite a quantidade numeros: ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            printf("1 ");
        } else {
            float resp = 1.0 / pow(x, 2 * i);
            printf(", %f ", resp);
        }
    }
    printf("\n");
}

void method_0516(){
    int n, soma=0, valor=0, cont=0;
    printf("\nquantos multiplos voce deseja na soma? ");
    scanf("%d", &n);
    printf("\n");
    do{
        if(valor%3 == 0 && valor%4 != 0){
            printf("%d", valor);
            soma=soma+valor;
            cont++;
            if(cont < n) {
                printf(" + ");
            }
        }
        valor++;
    }while(cont < n);

    printf(" = %d\n", soma);
    printf("\n");
}

void method_0517(){
    int n, numero=0, cont=0;
    float soma=0;
    printf("\nquantos multiplos voce deseja na soma? ");
    scanf("%d", &n);
    printf("\n");
    do{
        if(numero%4 == 0 && numero%5 != 0){
            printf("1/%d", numero);
            soma=soma+(1.0 / numero);
            cont++;
            if(cont < n){
                printf(" + ");
            }
        }
        numero++;
    }while(cont<n);
    printf(" = %f\n", soma);
    printf("\n");
}

void method_0518(){

    int n, numero=5 , cont=0 , soma =0;
    scanf("%d",&n); 

        for(int i=0;i<n;i++){
            numero+=i;
            soma=soma+numero;
            cont++;
            printf("%d",numero);
            printf(" + ");
        }
printf("=%d",soma);
}

void method_0519(){
    int n, numero=5 , cont=0 , soma =0;
    printf("\nquantos numeros voce deseja na soma? ");
    scanf("%d", &n);
    printf("\n");
    for(int i=0;i<n;i++){
        soma=soma+(numero*numero);
        printf("%d",(numero*numero));
        cont++;
        numero++;
        if(cont < n){
            printf(" + ");
        }
    }
    printf(" = %d\n",soma);
}

void method_0520(){
    int n, count = 0, numero = 3;
    float soma = 0;
    printf("\ndigite a quantidade de valores: ");
    scanf("%d", &n);
    printf("\n");
    int denominadores[n];
    while(count < n) {
        if(numero % 10 == 3) {
            denominadores[count] = numero;
            count++;
        }
        numero++;
    }
    for(int i = n - 1; i >= 0; i--) {
        printf("1/%d", denominadores[i]);
        soma += 1.0 / denominadores[i];
        if(i > 0) {
            printf(" + ");
        }
    }
    printf(" = %.4f\n", soma);
}
int main(){
    int opcao = 0;
    do {
        printf("\nOpcoes:\n");
        printf("0 - Sair\n");
        printf("1 - Metodo 0511\n");
        printf("2 - Metodo 0512\n");
        printf("3 - Metodo 0513\n");
        printf("4 - Metodo 0514\n");
        printf("5 - Metodo 0515\n");
        printf("6 - Metodo 0516\n");
        printf("7 - Metodo 0517\n");
        printf("8 - Metodo 0518\n");
        printf("9 - Metodo 0519\n");
        printf("10 - Metodo 0519\n");
        printf("\nescolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                break;
            case 1:
                method_0511();
                break;
            case 2:
                method_0512();
                break;
            case 3:
                method_0513();
                break;
            case 4:
                method_0514();
                break;
            case 5:
                method_0515();
                break;
            case 6:
                method_0516();
                break;
            case 7:
                method_0517();
                break;
            case 8:
                method_0518();
                break;
            case 9:
                method_0519();
                break;
            case 10:
                method_0520();
                break;
            default: printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}








































