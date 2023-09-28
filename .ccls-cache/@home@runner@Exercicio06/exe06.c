#include "pilhacharponteiro.h" // pilha de char *
#include <stdio.h>
#include <string.h>

int main(void) {
  Pilha P = pilha(5);
  char s[11];

  for (int i = 1; i <= 3; i++) {
    printf("? ");
    fgets(s, sizeof(s), stdin);
    empilha(strdup(s), P);
  }

  while (!vaziap(P)) {
    puts(topo(P));
    free(desempilha(P));
  }

  return 0;
}
