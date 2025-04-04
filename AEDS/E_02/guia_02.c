#include <stdio.h>
#include <math.h>


void method_0211(){
    int x;
    printf("Digite um numero inteiro ");
    scanf("%d",&x); getchar();
    printf("\nNumero escolhido %d.",x);
    if ((x%2==0) && (x>0)){
        printf("\nO numero e par e positivo ");
    }
    else if((x%2!=0) && (x<0)){
        printf("\nO numero e impar e negativo");
    }
    else{
        printf("\nO numero nao atende os requisitos da questao\n");
    }
}

void method_0212(){
    int x;
    printf("Digite um numero inteiro ");
    scanf("%d",&x);
    printf("\nNumero escolhido foi %d.",x);
    if ((x%2==0) && (x<-25)){
        printf("\nO numero e par e menor que -25");
    }
    else if ((x%2!=0) && (x>25)){
        printf("\nO numero e impar e maior que 25");
    }
    else{
        printf("\nO numero nao atende os requisitos da questao\n");
    }
}

void method_0213(){
    int x;
    printf("Digite um numero inteiro ");
    scanf("%d",&x);
    if ((x>20) && (x<55)){
        printf("\nO numero pertence ao intervalo aberto entre (20,55)");
    }
    else{
        printf("\nO numero nao pertence ao intervalo aberto entre (20,55)");
    }
}

void method_0214(){
    int x;
    printf("Digite um numero inteiro ");
    scanf("%d",&x);
    if((x>=20) && (x<=55)){
        printf("\nO numero pertence ao intervalo fechado entre [20,55] ");
    }
    else{
        printf("\nO numero nao pertence ao intervalo fechado entre [20,55]");
    }
}

void method_0215(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    if (x >= 10 && x <= 30){
        if ((x > 20) && (x<=30)){
            printf("\nO numero pertence à intersecao dos intervalos");
        }
        else{
            printf("\nEle pertence apenas a 1 dos intervalos");
        }
    }
    else{
        printf("\nEsta errado");
    }
}

void method_0216(){
        int a,b;
        printf("\nDigite um numero inteiro ");
        scanf("%d",&a); getchar();
        printf("\nDigite outro numero inteiro ");
        scanf("%d",&b); getchar();

        if ((a%2!=0) && (b%2==0)){
            printf("O primeiro numero e impar e o segundo e par");
        }
}


void method_0217(){
    int x,y;
    printf("Digite um numero inteiro ");
    scanf("%d",&x);
    printf("\nDigite outro numero inteiro ");
    scanf("%d",&y);
    if ((x%2==0) && (x<0)){
        printf("\nO primeiro numero e par e negativo");
    }
    if ((y%2!=0) && (y>0)){
        printf("\nO segundo numero e impar e positivo");
    }
    printf("\nOs numeros escolhidos foram %d e %d",x,y);
}


void method_0218(){
    float x,y;
    printf("Digite um numero ");    
    scanf("%f",&x);
    printf("\nDigite outro numero ");
    scanf("%f",&y);

    if(x > (y/4) ){
        printf("%.2f E maior que 1/4 de %.2f",x,y);
    }
    else if (x<(y/4)){
        printf("%.2f E menor que 1/4 de %.2f",x,y);
    }
    else{
        printf("%.2f E igual a 1/4 de %.2f",x,y);
    }
}

void method_0219(){
    float a,b,c;
    printf("Digite um numero ");
    scanf("%f",&a);
    printf("\nDigite outro numero ");
    scanf("%f",&b);
    printf("\nDigite outro numero ");
    scanf("%f",&c);

    if (a!=c){
        if ((b > a && b < c) || (b < a && b > c)){
            printf("O segundo numero %.2f esta entre o primeiro %.2f e o ultimo %.2f",a,b,c);
        }
        else{
            printf("O segundo numero (%.2f) nao esta entre o primeiro (%.2f) e o ultimo (%.2f)",a,b,c);
        }
    }
    else {
        printf("O primeiro numero e o ultimo sao iguais, tente colocar outros valores");
    }
}


void method_0220(){
    float a,b,c;
    printf("Digite um numero");
    scanf("%f",&a);
    printf("\nDigite outro numero");
    scanf("%f",&b);
    printf("\nDigite outro numero");
    scanf("%f",&c);
    if((a!=b) && (b!=c)){
        if (((b>a) && (b>c)) || ((b<a) && (b<c))){
            printf("O segundo numero (%.2f) nao esta entre o primeiro (%.2f) e o ultimo (%.2f)",a,b,c);
        }
    }

}
int main(){

    int opcao=0;


    do{
        printf("\nOpcoes:\n");
        printf("0 - Sair\n");
        printf("1 - Metodo 0211\n");
        printf("2 - Metodo 0212\n");
        printf("3 - Metodo 0213\n");
        printf("4 - Metodo 0214\n");
        printf("5 - Metodo 0215\n");
        printf("6 - Metodo 0216\n");
        printf("7 - Metodo 0217\n");
        printf("8 - Metodo 0218\n");
        printf("9 - Metodo 0219\n");
        printf("10 - Metodo 0220\n");
        printf("\nescolha uma opcao: ");
        scanf("%d", &opcao);


        switch(opcao){
            case 1:
                method_0211();
                break;
            case 2:
                method_0212();
                break;
            case 3:
                method_0213();
                break;
            case 4:
                method_0214();
                break;
            case 5:
                method_0215();
                break;
            case 6:
                method_0216();
                break;
            case 7:
                method_0217();
                break;
            case 8:
                method_0218();
                break;
            case 9:
                method_0219();
                break;
            case 10:
                method_0220();
                break;
            default:
                break;
    }
} while(opcao!=0);
}