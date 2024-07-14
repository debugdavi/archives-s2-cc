#include <stdio.h>


int main(){
    char val[4];
    char newval[4];

    scanf(" %s", val);

    newval[0] = val[2];
    newval[1] = val[1];
    newval[2] = val[0];

    printf("Val original: %s\nVal contrario: %s\n", &val, &newval);
}


/*int main(){
    float ang;
    float rad;

    scanf("%f", &ang);
    rad = (ang * 3.141592) / 180;

    printf("Angulo para Rad = %0.2f\n", rad);
}

int main(){
    float tempC;
    float tempF;

    printf("Diga a temperatura em C para converter para F: ");
    scanf("%f", &tempC);

    tempF = tempC * 1.8 + 32;
    printf("A temperatura em Fahrenheit eh %0.1f F\n", tempF);
}

int main(){
    float cotre;
    float op;

    printf("Digite um valor para converte-lo em dolar e a cotacao do dolar, respectivamente: ");
    scanf("%f %f", &cotre, &op);

    op = cotre/op;

    printf("a quantidade de dol eh: $%0.02f\n", op);

}

int main(){
    float velkm;
    float velms;

    printf("coloque o valor em km para transformar em ms: ");
    scanf("%f", &velkm);

    velms = velkm/3.6;
    printf("o valor de %0.2f km em ms eh: %0.2f\n", velkm, velms);

} */
