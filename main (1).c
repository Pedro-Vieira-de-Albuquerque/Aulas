/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define MAX_LENGTH 256
#define NUM_PERGUNTAS 3

typedef struct {
    char pergunta[MAX_LENGTH];
    char resposta[MAX_LENGTH];
} PerguntaResposta;

int main() {
    PerguntaResposta perguntasERespostas[NUM_PERGUNTAS] = {
        {"Qual a capital do Afeganistão ?", "Kabul"},
        {"Quem não tem mundial de clubes ?", "Palmeiras"},
        {"Quem nas em Salvador é ... ?", "Preguiçoso"}
    };

    // Acesso e impressão de uma pergunta e resposta
    for (int i = 0; i < NUM_PERGUNTAS; i++) {
        printf("Pergunta: %s\n", perguntasERespostas[i].pergunta);
        printf("Resposta: %s\n\n", perguntasERespostas[i].resposta);
    }

    return 0;
}
