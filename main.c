#include <stdio.h>

int leer_opcion();
void mostrar_menu();
void tratar_opcion (int op);
float suma_naturales();
float suma_inversos();
float producto_naturales();
int leer_numero();
void mostrar_resultado (int op, float res);

int main() {
    int opcion;
    float resultado;
    printf("\nIntroduce opcion");
    do {
        mostrar_menu();
        opcion=leer_opcion();
        tratar_opcion(opcion);
    } while (opcion!=4);
    return 0;
}

int leer_opcion(){
    int num;
    do {
        scanf("%d",&num);
        fflush(stdin);
        if (num<1 || num>4){
            printf("\nOpcion invalida, introduzca de nuevo (1 - 4)");
            mostrar_menu();
        }
    } while (num<1 || num>4);
    return num;
}

void mostrar_menu(){
        printf("\n----------| MENU |----------");
        printf("\n1) Suma de numeros naturales");
        printf("\n2) Factorial");
        printf("\n3) Suma de los inversos");
        printf("\n4) Fin");
        printf("\n-----------------| Opcion: ");
}

void tratar_opcion (int op){
    switch (op) {
        case 1:
            mostrar_resultado(op,suma_naturales());
            break;
        case 2:
            mostrar_resultado(op,producto_naturales());
            break;
        case 3:
            mostrar_resultado(op,suma_inversos());
            break;
        case 4:
            break;
    }
}

float suma_naturales(){
    float sumatorio=0;
    int n=leer_numero();
    for (int i = 1; i <= n ; i++) {
        sumatorio+=(float)i;
    }
    return sumatorio;
}

float suma_inversos(){
    float sumatorio=0;
    int n=leer_numero();
    for (int i = 1; i <= n ; i++) {
        sumatorio+=1/(float)i;
    }
    return sumatorio;
}

float producto_naturales(){
    float factorial=1;
    int n=leer_numero();
    for (int i = 1; i <= n ; i++) {
        factorial*=(float )i;
    }
    return factorial;
}

int leer_numero(){
    int num;
    printf("\nIntroduce un numero entero: ");
    scanf("%d",&num);
    fflush(stdin);
    return num;
}

void mostrar_resultado (int op, float res){
    switch (op) {
        case 1:
            printf("La suma de numeros naturales es: %.f\n",res);
            break;
        case 2:
            printf("El factorial es: %.f\n",res);
            break;
        case 3:
            printf("La suma de los inversos es: %f\n",res);
            break;
        case 4:
            break;

    }
}
