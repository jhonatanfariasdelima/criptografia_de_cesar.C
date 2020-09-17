#include <stdio.h>
#include <string.h>


void cifrar(void){
    char frase[100];
    int i,rotacoes = 0;

    printf("entre com a frase que deseja cifra (em letras minuscula): ");
    setbuf(stdin, NULL);
    fgets(frase,sizeof(frase), stdin);

    printf("numero de rotacoes: ");
    scanf("%d", &rotacoes);

    for(i = 0; i< strlen(frase); i++){
        if(frase[i] == ' '){
            frase[i] = ' ';
        }else if(frase[i] >=97 && frase[i] <= 122){
            frase[i] = frase[i] + rotacoes;

        }
    }

    int cont = 0;
    for(i = 0; i< strlen(frase); i++){
        cont = 0;
        if(frase[i] == ' '){
            frase[i] = ' ';
        }else if(frase[i] > 122){
            while(frase[i] > 122){
                frase[i] -= 1;
                cont++;
            }
            frase[i] = 96 + cont;
        }

    }

    printf("%s", frase);
}


int main(void){
   cifrar();

}
