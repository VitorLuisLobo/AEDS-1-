#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void method_extra01(){
    double raio,x,resp,pi=3.14;
    printf("Digite o raio da circunferencia :");
    scanf("%f",&raio);
    printf("Digite a quantidade de vezez que deseja dividi-la: ");
    scanf("%f",&x);
    if(raio>0 && x>0){
        resp = (2*pi*raio)/x;
        printf("%.2f",resp);
    }
}  


void method_extra02(){
    int qtd;
    char c1,c2,c3;
    bool resposta = true ; 
    printf("Digite a quantidade de testes a serem realizados: ");
    scanf("%d",qtd);
    while(qtd>0){
        printf("Digite uma letra: ");
        scanf("%c",&c1);
        printf("Digite outra letra: ");
        scanf("%c",&c2);
        printf("Digite uma ultima letra: ");
        scanf("%c",&c3);
        resposta = (c1 < c2) && (c2 < c3);

        if(resposta){
            printf("Os caracteres estao em ordem crescente de acordo com a tabela ASCII (%c, %c , %c )",c1,c2,c3);

        }
        else{
            printf("Os caracteres nao estao em ordem crescente de acordo com a tabela ASCII");
        }
     qtd--;
    }

}


void method_extra03(){
    int a,b,n,x;
    int cont=0;
    printf("Digite o primeiro valor do intervalo [ , ) : ");
    sacnf("%d",&a);
    printf("\nDigite o segundo valor do intervalo [%d , ) : ");
    scanf("%d",&b);
    printf("\nIntervalo escolhido foi [%d , %d ) : ",a,b);
    printf("\nDigite a quantidade de valores que deseja ser testado: ");
    scanf("%d",&n);
    int resp[n];
    
    for(int i=0 ; i<n ; i++){
        printf("Digite um numero : ");
        scanf("%d",&x);

        if(x%2==0){
            if((x/2)>=a && (x/2)<b){
                if((x*2)>=a && (x*2)<b){
                    printf("\nO %d que atende as necessidades da questao e %d",i,x);
                    cont++;
                }

            }
        }
        
    }
printf("A quantidade de numeros guardados foram (%d)",cont);
}
