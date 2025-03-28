#include<stdio.h>
#include<math.h>

void method_0111(){
    int lado,area=0;
        scanf("%d",&lado);
            area = (lado*3) * (lado*3);
            printf("O valor da area e %d",area);
 
}


void method_0112(){
    int lado,area=0,perimetro=0;
        scanf("%d",&lado);
            area = (lado/2) * (lado/2);
            perimetro = (lado*4)/2;
                printf("A area do quadrado com metade do lado do orignal é %d",area);
                printf("\nO perimetro quadrado com metade do lado do orignal é %d",perimetro);

}


void method_0113(){
    int l1,l2,area=0;
        scanf("%d",&l1);
        scanf("%d",&l2);
            area = (l1*2) * (l2*2);
                printf("A area do retangulo e %d",area);
}


void method_0114(){
    int lado1,lado2,area=0,perimetro=0;

        scanf("%d",&lado1);
        scanf("%d",&lado2);
            area = (lado1/4) * (lado2/4);
            perimetro = ((lado1*2)/4) * ((lado2*2)/4);
                printf("A area do retangulo e %d",area);
                printf("O perimetro do retangulo e %d",perimetro);
}


void method_0115(){
        float base,altura,area=0;
            scanf("%f",&base);
            scanf("%f",&altura);
                area = (base*(altura*2));
                    printf("A area do triangulo e %.2f",area);
}

void method_0116(){
    float lado,altura=0,area=0,perimetro=0;
        scanf("%f",&lado);
            altura = (lado/3)*(sqrt(3))/2;
            area = ((lado/3)*(lado/3))*(sqrt(3))/4;
            perimetro = (lado/3)*3;
                printf("A altura do triangulo e %.2f",altura);
                printf("\nA area do triangulo e %.2f",area);
                printf("\nO perimetro do triangulo e %.2f",perimetro);
}

void method_0117(){
    float lado,volume=0;
        scanf("%f",&lado);
            volume = pow((lado*4),3);
                printf("O volume e %.2f",volume);
}


void method_0118(){
    float comprimento,largura,altura,volume=0;
        scanf("%f",&comprimento);
        scanf("%f",&largura);
        scanf("%f",&altura);
            volume = (comprimento*5) * (largura*5) * (altura*5);
                printf("O volume e %.2f",volume);
}

void method_0119(){
    float raio,area=0, pi=3.14;
        scanf("%f",&raio);
            area = pi*(pow((raio*4),2))/2;
                printf("A area e %.2f",area);
}

void method_0120(){
    float raio, volume=0,pi=3.14;
        scanf("%f",&raio);
            volume = 4 * pi * (pow((raio*5)/8,3)) /3 ;
                printf("O volume e %.2f",volume);
}


int main(){
    int opcao = 0;
    printf("\n%s\n\n","869691_AED1");

    do{

        printf("%s","\nQual a opcao\n");
        scanf("%d",&opcao); getchar();
        printf("%s%d\n","opcao=",opcao);
        switch (opcao){
    case 0:
        break;
    case 1:
        method_0111();
        break;
    case 2:
        method_0112();
        break;
    case 3:
        method_0113();
        break;
    case 4:
        method_0114();
        break;
    case 5:
        method_0115();
        break;
    case 6:
        method_0116();
        break;
    case 7:
        method_0117();
        break;
    case 8:
        method_0118();
        break;
    case 9:
        method_0119();
        break;
    case 10:
        method_0120();
        break;
    default:
        break;


    }


    } while (opcao!=0);

    printf("%s","\nApertar ENTER para terminar \n");
    getchar();
    return 0;

}