#include <stdio.h>

int main() {
    int i, n;
    int velocidades[100];
    float maxima;
    int limite, vencedor;
    /*Não consegui abrir o chat, me lembro dessa chat, mas agr aco que se tornou um recurso premium, já tem um tempo em que não consigo usar o chat. Sorry, encaminhei um foto no wts.*/
    scanf("%d", &n);


    for (i = 0; i < n; i++){
        scanf("%d", &velocidades[i]);
        }

    scanf("%d", &limite);

    /* Termine a questão */

    for (int j = 0; j < n; j++){

         /* 1 a questão */
        if (velocidades[j] <= 10 && limite <= 3){
            float soma = (((float)velocidades[j] / 60) / 60) * 10.800;


            if(soma >= maxima){
                vencedor = velocidades[j];
                maxima = soma;
                }
            //printf("Verifica (3): %f\n", vencedor);
            }

         /* 2 a questão */
        else if ((velocidades[j] > 10 || velocidades[j] <= 20) && limite <= 2) {
            float soma = (((float)velocidades[j] / 60) / 60) * 7.200;



            if(soma >= maxima){
                vencedor = velocidades[j];
                maxima = soma;
                }
            //printf("Verifica (3): %f\n", vencedor);
            }

         /* 3 a questão */
        else if ((velocidades[j] > 20 || velocidades[j] <= 100) && limite <= 1){
            float soma = (((float)velocidades[j] / 60) / 60) * 3.600;
            printf("Verifica (1): %f", maxima);

            if(soma >= maxima){
                vencedor = velocidades[j];
                maxima = soma;
                }
            //printf("Verifica (3): %f\n", vencedor);
            }

         /* Fim a questão */

}

printf("%d\n", vencedor);

return 0;
}


/*
----------- Regras>
Abaixo de 10: Corre por 3 Horas   | --- Rapido
Entre 11 e 20: Corre por 2 Horas  | -- Rapido
Entre 21 e 100: Corre por 1 Hora  | +++ Rapido 

----------- Soma>
(10) (20) (100)
(/60) (/60) * (Hora "1 minuto possui 60 segundos, uma hora possui 3600 segundos 60*60 = 3600")
9 = 0.0025 cm/s * 10800 h/s = 27 m
12 = 0.0033 cm/s * 7200 h/s  = 23.76 m
40 = 0.0111 cm/s * 3600 h/s = 36.96 m

Teste (1) - Recusado, erros de programação!
#include <stdio.h>

int main() {
    int i, n;
    int velocidades[100];
    float soma, maxima = 0.0;
    int limite, vencedor;
  
    scanf("%d", &n);


    for (i = 0; i < n; i++){
        scanf("%d", &velocidades[i]);
  
    }
        
    scanf("%d", &limite);


    for (int j = 0; j < n; j++){
    
        if (velocidades[j] <= 10 &&limite <= 3){
            soma = ((velocidades[j] / 60) / 60) * 10.800;

            if(soma >= maxima){
                vencedor = velocidades[j];
                maxima = soma;
                }


        }else if ((velocidades[j] > 10 || velocidades[j] <= 20) && limite <= 2) {
            soma = ((velocidades[j] / 60) / 60) * 7.200;

            if(soma >= maxima){
                vencedor = velocidades[j];
                maxima = soma;
                }
        

        }else if ((velocidades[j] > 20 || velocidades[j] <= 100) && limite <= 1){
            soma = ((velocidades[j] / 60) / 60) * 3.600;

            if(soma >= maxima){
                vencedor = velocidades[j];
                maxima = soma;
                }
        

        }

    }
  
    printf("%d\n", vencedor);

    return 0;
}


*/