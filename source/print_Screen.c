#include "print_Screen.h"

char valor_simbolo(int i){

    switch(i){
        
    case 0:
            return ' ';
        case 1:
            return '.'; /*INDICA POSICAO VAZIA */ 
        case 2:
            return '*';
        case 3:
            return '#';     
    }
    return ('?');
}

void imprime_tela2(int d[][COLUNA]){
	
    int rr, cc;
    
    printf("  +---+---+---+---+---+---+---+---+\n");
    
    for (rr=0; rr<LINHA; ++rr){
    	
        printf("%d |", rr+1);
        for (cc=0; cc<COLUNA; ++cc){
        	
            printf(" %c |", valor_simbolo(d[rr][cc]) );
        }
        
        printf("\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
    }
    
    printf("    a   b   c   d   e   f   g   h\n");
}