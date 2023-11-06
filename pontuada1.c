#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){

setlocale(LC_ALL,"portuguese");

int temperatura;
 
 printf("Informe a temperatura Do Clima:\n");
 scanf("%d",&temperatura);



    if (temperatura >= 25) {
        printf("Clima Ensolarado\n");
    } else if (temperatura <= 15) {
        printf("Clima Chuvoso\n");
    } else if (temperatura <= 25) {
        printf("Clima nublado\n");
    } 









    return 0;
 }

