# GameCheckers

-------------------------------------------------------------*- Jogo Dama -*----------------------------------------------------------------

Sobre o jogo:

Jogo desenvolvido em linguagem C
Para compilar execute o arquivo make.bat
O mesmo se encarregará de compilar e executar o programa. (As tags de compilação podem ser visualizadas no próprio arquivo make.)

Peças são separadas entre * -> peças vermelhas; e # -> peças pretas; e o ' .' que indica as casas vazias, disponíveis para movimentação.

(VERMELHA nome representativo para parte de cima do tabuleiro * )

(PRETA nome representativo para parte de baixo do tabuleiro # )

O Tabuleiro está no padrão brasileiro do jogo, que contém 64 casas 
Representação vertical de 1 a 8
Representação horizontal da letra (a) até (h)

------------------------------------------------------------------------------------------------------------------------------------------

Instruções de jogo:

Começa com peças VERMELHAS( * parte de cima do tabuleiro)
1º = Jogador fornece ao programa a peça que quer mover 
ex: 3b
2º = Para onde deseja mover a peça
ex: 4a
Depois para PRETAS( # parte de baixo do tabuleiro)
1º = Jogador fornece ao programa a peça que quer mover 
ex: 6a
2º = Para onde deseja mover a peça
ex: 5b


O programa irá verificar se o movimento é permitido.
Se for mostrará qual peça foi movida, se não indicará que movimento é invalido.

Captura somente inimigo(na tentativa programa mostrará movimento invalido, 
Não é permitido às peças:
sopro(oponete é obrigado a capturar), 
retroceder casas,
saltar mais de uma casa, ela deve saltar apenas de uma em uma,
saltar sobre companheiro( na tentativa programa indicara movimento invalido).

Ganha o jogador que eliminar todas as peças do oponente
Ou o oponente não poder executar nenhum movimento, chamado (peças trancadas).
Pela regra original de damas (Empate não vitória).
