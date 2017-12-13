# GamePongMAX

-------------------------------------------------------------*- Jogo Dama -*----------------------------------------------------------------

Sobre o jogo:

Jogo desenvolvido em linguagem C
Para compilar execute o arquivo make.bat
O mesmo se encarregar� de compilar e executar o programa. (As tags de compila��o podem ser visualizadas no pr�prio arquivo make.)

Pe�as s�o separadas entre * -> pe�as vermelhas; e # -> pe�as pretas; e o ' .' que indica as casas vazias, dispon�veis para movimenta��o.

(VERMELHA nome representativo para parte de cima do tabuleiro * )

(PRETA nome representativo para parte de baixo do tabuleiro # )

O Tabuleiro est� no padr�o brasileiro do jogo, que cont�m 64 casas 
Representa��o vertical de 1 a 8
Representa��o horizontal da letra (a) at� (h)

------------------------------------------------------------------------------------------------------------------------------------------

Instru��es de jogo:

Come�a com pe�as VERMELHAS( * parte de cima do tabuleiro)
1� = Jogador fornece ao programa a pe�a que quer mover 
ex: 3b
2� = Para onde deseja mover a pe�a
ex: 4a
Depois para PRETAS( # parte de baixo do tabuleiro)
1� = Jogador fornece ao programa a pe�a que quer mover 
ex: 6a
2� = Para onde deseja mover a pe�a
ex: 5b


O programa ir� verificar se o movimento � permitido.
Se for mostrar� qual pe�a foi movida, se n�o indicar� que movimento � invalido.

Captura somente inimigo(na tentativa programa mostrar� movimento invalido, 
N�o � permitido �s pe�as:
sopro(oponete � obrigado a capturar), 
retroceder casas,
saltar mais de uma casa, ela deve saltar apenas de uma em uma,
saltar sobre companheiro( na tentativa programa indicara movimento invalido).

Ganha o jogador que eliminar todas as pe�as do oponente
Ou o oponente n�o poder executar nenhum movimento, chamado (pe�as trancadas).
Pela regra original de damas (Empate n�o vit�ria).