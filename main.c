#include <stdio.h>
int jeu_nul(int n){
    if (n==1){
        return 2;
    } if (n==2){
        return 3;
    } if (n==3){
        return 4;
    } if (n==4){
        return -3;
    } if (n==5){
        return 6;
    } if (n==6){
        return 7;
    }
}

void Jeu(){
    int nb;
    int result;
    printf("choisir un nombre entre 1 et 6.\n selecionner le bon nombre, si vous tombez sur un nombre inférieur à votre choix, vous gagnez");
    scanf("%d", &nb);
    result = jeu_nul(nb);
    if(nb > result){
        printf("%d\n",result);
        printf("Victoire!");
        return;
    }
    printf("%d\n",result);
    printf("c'est perdu essaye encore\n");
    Jeu();
}

int main() {
    Jeu();
    return 0;
}