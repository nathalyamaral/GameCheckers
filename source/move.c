#include "move.h"

void trocaIJKL(int d[LINHA][COLUNA], int i, int j, int k, int l){
    
    int temp;
    
    printf("MOVEU POSICAO: %d,%d PARA %d,%d\n", i, j, k, l);
    
    temp = d[i][j];
    
    d[i][j] = d[k][l];
    
    d[k][l] = temp;


}

int joga_de_volta(int d[][COLUNA], int player,int i,int j,int k,int l){
	
    int pula_r;
    int pula_c;
    
    if(player == VERMELHO){
        printf("VERMELHO moveu de %d,%d para %d,%d\n", i, j, k, l);
        
    } else {
        printf("PRETO moveu de %d,%d para %d,%d\n", i, j, k, l);
    }
    
    if(i < 0 && LINHA <= i){ /* limite da linha */
        printf("i esta fora do limite\n");
        return -1;
    }
    if(j < 0 && COLUNA <= j){
        printf("j esta fora do limite\n");
        return -1;
    }
        
    if(k < 0 && LINHA <= k){
        printf("k esta fora do limite\n");
        return -1;
        
    }
    if(l < 0 && COLUNA<= l){
        printf("l esta fora do limite\n");
        return -1;
    }
        
    /* compara se esta movendo a peça da vez do jogador certo */
    if(player == VERMELHO){
        if(d[i][j] != VERMELHO){
            printf("Mova as pecas do seu lado\n");
            return -1;
        }
    } else { /* PRETO */
        if(d[i][j] != PRETO){
            printf("Mova as pecas do seu lado!\n");
            return -1;
        }
    }
    
    /* verifica se a posicao esta vazia */
    if(d[k][l] != VAZIO){
        printf("Voce deve mover a peca para uma posicao vazia\n");
        return -1;
    }
    
    
    
    
    
    /* verifica o movimento na vertical e permitido */
    if(player == VERMELHO){
        /* compara se o vermelho esta avancando para frente, no caso para baixo */
        if(i >= k){
            printf("VERMELHO avancou a peca\n");
            return -1;
        }
    } else { /* PRETO */
        /* compara se o preto esta avancando para frente, no caso para cima */
        if(i <= k){
            printf("PRETO avancou a peca\n");   
            return -1;
        }
    }
    
    
    /* verifica se o movimento e permitido */
    if(i - k == -1 || i - k == 1){
        if(j - l == 1 || j - l == -1){
            trocaIJKL(d,i,j,k,l);
            return 0;
        }
    }
    
    /* verifica se o movimento de pular e permitido */
    if(i - k == -2 || i - k == 2){
        if(j - l == -2 || j - l == 2){
            /* verifica se quer pular sobre um inimigo */
            if(i < k){ /* move para baixo */
                pula_r = i + 1;
            } else { /* move para cima */
                pula_r = i - 1;
            }
            if(j < l){ /* move para baixo */
                pula_c = j + 1;
            } else { /* move para cima */
                pula_c = j - 1;
            }
            
            if(player==VERMELHO && d[pula_r][pula_c]!=PRETO)
            {
                printf("Esta nao e uma peca inimiga at %d%d",pula_r, pula_c);
                return -1;
            }
            if(player==PRETO && d[pula_r][pula_c] != VERMELHO){
                printf("Voce so pode capturar uma peca inimiga\n");
                return -1;
            }
            
            /*  verifica se o pulo para capturar e valido*/
            d[pula_r][pula_c] = 1;
            trocaIJKL(d,i,j,k,l);
            return 0;
        }
    }
    
    printf("Voce so pode mover-se para diagonal\n");
    return -1;
    
}
