#include <stdio.h>

#define LINHA 8
#define COLUNA 8

#define VAZIO 1
#define VERMELHO 2
#define PRETO 3
#define RAINHAVER 4
#define RAINHAPRET 5


#define EVEMELHO(c)  (c == VERMELHO || c == RAINHAVER)
#define EPRETO(c) (c == PRETO || c == RAINHAPRET)
#define EVAZIO(c) (c == 1)