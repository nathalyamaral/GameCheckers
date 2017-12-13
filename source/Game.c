#include "checkersLib.h"

int main(){

	int i, k;
	char j, l;
	int d[LINHA][COLUNA]={
		
    {0,2,0,2,0,2,0,2},
    {2,0,2,0,2,0,2,0}, 
    {0,2,0,2,0,2,0,2}, 
    {1,0,1,0,1,0,1,0}, 
    {0,1,0,1,0,1,0,1}, 
    {3,0,3,0,3,0,3,0},
    {0,3,0,3,0,3,0,3},
	{3,0,3,0,3,0,3,0}};

    for(;;){
    	
        
        imprime_tela2(d);
        /* VERMELHO vez */
        while(1){
            printf("E a vez do VERMELHO: ");
            scanf("%d%c",&i,&j);
    	    printf("mover para: ");
        	scanf("%d%c",&k,&l);
        	
        	if(joga_de_volta(d, VERMELHO, i-1,j - 'a',k-1,l - 'a') == 0)
        	    break;
        	printf("Movimento nao permitido, tente novamente\n");
        }
        
        /* verifica quem ganhou */
        
        imprime_tela2(d);
        /* PRETO vez */
        while(1){
            printf("E a vez do preto: ");
            scanf("%d%c",&i,&j);
    	    printf("mover para :");
        	scanf("%d%c",&k,&l);
        	if(joga_de_volta(d, PRETO, i-1,j - 'a',k-1,l - 'a') == 0)
        	    break;
        	printf("Movimento nao permitido, tente novamente\n");
        }
        
        /* verfica quem ganha */
        
    }

	getchar();
	getchar();
    return 0;
}
