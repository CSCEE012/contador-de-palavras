/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;

  int n=0,l=0, f=0;//n conta o # de palavras, l verifica se c é uma letra(1), numero(2), nenhum(0), f se é ponto ou virgula de float

  c = 1;
  

  while (c != '\n') {

    scanf("%c", &c);

    //Verifica se a letra (lida no momento) é o inicio de uma palavra, caso positivo incrementa o contador
    if(((c >= 65)&&(c <= 90)) || ((c >= 97)&&(c <= 122))){
      if(l==1){

        l=1;
        f=0;

      }
      else {

        l=1;
        f=0;
        n++;
    

      }
    }

    //Verifica se o número (lido no momento) é o inicio de uma palvra, caso positivo incrmenta o contador
    else if((c >= 48)&&(c <= 57)){
      if(l==2){

        l=2;
        f=0;

      }

      else {
        if(f==1){

        l=2;

        }

        else{

        n++;
        l=2;

        }
      }
    }

    //Verifica se o '.' ou ',' são precedidos por um número, caso positivo incrementa a flag f
    else if((c == 44) || (c == 46)){
      if(l == 2){

        f++;
        l=0;

      }

      else{

        f=0;
        l=0;

      }

    }
    else{

        f=0;
        l=0;
 
    }

  }

  printf("%d\n", n);
  return 0;
}
