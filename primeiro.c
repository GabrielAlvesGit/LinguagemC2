#include <stdio.h>

int main (){
    //char Nome[5];
     
    float altura, imc, peso;

    //printf("Informe seu Nome\n");
    //scanf("%s", &Nome);
    printf("Informe seu peso (em kgs):\n");
    scanf("%f", &peso);
    printf("Informe sua altura (em metros 'Usar ponto no lugar da virgula'):\n");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    

    if (imc <= 0.00){
        printf("( 0 = Sair, Tente novamente ).\n"); 
    }
    else if ((imc < 1) && (imc < 20)){
        printf("(Abaixo do peso).\n"); 
    }
    else if ((imc >= 20) && (imc < 25)){
        printf("(Peso normal).\n");
    }
    else if ((imc >= 25) && (imc < 30)){
        printf("(Acima do peso).\n");
    }
    else if ((imc >= 30) && (imc < 34)){
        printf("(Obeso).\n");
    }
    //else{
		//printf("(Muito obeso).\n");
    //}  

    printf("IMC =%.2f %.2f\n",imc);

    return 0;
}