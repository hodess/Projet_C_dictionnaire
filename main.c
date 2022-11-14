#include <stdio.h>
#include "gigi's_main.h"
#include "ver.h"

int main() {
    p_node_ver temp;
    p_node_ver sport=NULL;
    printf("bonjour");
    printf("%p\n",sport);
    sport=addVer("bonjours",sport,"Inf","SG","P3");
    printf("%p\n",sport);
    printf("%s %d %d %d\n",sport->forme_flechie,sport->pluriel,sport->conjugaison,sport->personne);
    printf("%p\n",sport);
    sport=addVer("bonjo",sport,"IPre","PL","P3");
    printf("%p\n",sport);
    printf("%p\n",sport);
    printf("%s %d %d %d\n",sport->forme_flechie,sport->pluriel,sport->conjugaison,sport->personne);
    return 0;
}
