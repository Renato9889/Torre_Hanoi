#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int elementos[3];
    int topo;

}pilha;
void push(pilha &p, int elemento){
    if(p->topo<10){
        p->elementos(p->topo++) = elemento;
    }else{
        printf("Pilha Cheia");
    }
}
int top(pilha p){
    if(p.topo>0){
        return p.elementos[p.topo-1];
    }else{
        return -1;
    }
}
int pop(pilha p){
    if(p.topo>0){
        p.topo--;
        return p.elementos[p.topo];
    }else{
        return -1;
    }
}

void facil(){
    pilha pilha1, pilha2, pilha3;
    int i, disco = 1;
    for(i=0;i<3;i++){
       pilha1.elementos[i] = disco;
       disco++;
    }
    for(i=0;i<3;i++){
       printf("%d",pilha1.elementos[i]);
    }
    for(i=0;i<3;i++){
       printf("%d",pilha2.elementos[i]);
    }
    for(i=0;i<3;i++){
       printf("%d",pilha2.elementos[i]);
    }


}

int main()
{
    char nome[20];
    int nivel;
    printf("><><><BEM VINDO A TORRE DE HANOI><><><\n");
    printf("\n");
    printf("DIGITE SEU NOME: ");
    gets(nome);
    printf("\n");
    printf("OLA %s, EXISTE TRES NIVEIS\n",nome);
    printf("\n");
    printf("[1]FACIL\n");
    printf("[2]MEDIO\n");
    printf("[3]DIFICIL\n");
    printf("\n");
    printf("ESCOLHA UM NIVEL: ");
    scanf("%d",&nivel);

    facil();
    return 0;
}
