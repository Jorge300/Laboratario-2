#include<iostream>
#include "biblioteca.hpp"
using namespace std;
int main(int argc, char**argv){
   int numero, ResultadoFacto;
   printf("Sacar el Factorial de Un Numero \n");
   printf("Ingrese un numero: "); 
   scanf("%d", &numero);
   ResultadoFacto=Factornum(numero);
   printf("%d! = %d \n", numero, ResultadoFacto);
   printf("El factorial del numero %d es: %d \n", numero, ResultadoFacto);
   
   system("pause");
}
