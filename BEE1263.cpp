//bee 1263

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i;
    char frase[5100];

    while(scanf("%[^\n]\n", &frase) != EOF){
        int ali = 0;
        
        int proximaplvr = 0;
        int tamanhoali = 1;
        char letraatual = tolower(frase[0]);
        for(i = 1; i < strlen(frase); ++i){
            frase[i] = tolower(frase[i]);
            if(frase[i] == ' '){
                proximaplvr = 1;
            }else if(proximaplvr){
                if(frase[i] == letraatual){
                    tamanhoali += 1;
                }else{
                    if(tamanhoali > 1){
                        ali += 1;
                    }
                 tamanhoali = 1;
                 letraatual = frase[i];
                 
                }
                
                 proximaplvr = 0;
                 
            }
        }
        
        if(tamanhoali > 1){
            ali += 1;
        }

        printf("%d\n", ali);
    }

  return 0;
}