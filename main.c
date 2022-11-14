#include <stdio.h>
#include "gigi's_main.h"
#include "ver.h"

int main() {
    p_node_ver temp;
    p_node_ver sport=NULL;
    printf("Debut\n");
    printf("%p\n",sport);
    printf("1er\n");
    temp=addVer("bonjour",sport,"Inf","SG","P3");
    printf("2er\n");
    printf("%p\n",temp);
    printf("3er\n");
    printf("%s %d %d %d\n",temp->forme_flechie,temp->pluriel,temp->conjugaison,temp->personne);
    printf("4er\n");
    printf("%p\n",temp);
    printf("5er\n");
    temp=addVer("au revoir",temp,"IPre","PL","P3");
    printf("6er\n");
    printf("%p\n",temp);
    printf("7er\n");
    printf("%p\n",temp);
    printf("8er\n");
    printf("%s %d %d %d\n",temp->forme_flechie,temp->pluriel,temp->conjugaison,temp->personne);
    printf("hallo");
    return 0;
}
