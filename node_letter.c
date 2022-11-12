//
// Created by romai on 03/11/2022.
//

#include "node_letter.h"

//fonction temporaire
p_nom creation_struct_mot_flechis(char mot[30])
{
    p_nom temp=(p_nom)malloc(sizeof(t_nom));
    int i=0;
    while(mot[i]!='\0')
    {
        temp->mot_de_base[i]=mot[i];
        i++;
    }
    temp->mot_de_base[i]='\0';
    temp->nb_mot_flechis=1;
    return temp;
};

//cela sert a crée une branch de l'arbre
p_node_letter creation_dune_branche(char lettre)
{
    p_node_letter node=(p_node_letter) malloc(sizeof(t_node_letter));
    node->enfants=NULL;
    node->lettre=lettre;
    node->nb_enfant=0;
    node->mots_flechis = NULL;
    return node;
}

p_node_letter ajout_dune_lettre(char lettre,p_liste_lettre pre,p_node_letter ancienne_lettre)
{
    p_node_letter temp_lettre = creation_dune_branche(lettre);
    p_liste_lettre temp_liste = creation_maillon_liste_lettre(temp_lettre);
    ancienne_lettre->nb_enfant+=1;
    //on gere la liste soit de la tete si le precedent est null
    if (pre==NULL)
    {
        temp_liste->suivant = ancienne_lettre->enfants;
        ancienne_lettre->enfants=temp_liste;
        return temp_liste->node_lettre;
    }
        //sinon on ajoute en fonciton du precedent
    else
    {
        temp_liste->suivant=pre->suivant;
        pre->suivant=temp_liste;
        return temp_liste->node_lettre;
    }
}

//cela sert a ajouté un mot on ne fait pas de verification
p_node_letter ajout_dun_mot(char mot[30],p_node_letter rac)
{
    int i=0;
    p_node_letter tree=rac;
    p_liste_lettre pre=NULL;
    while (mot[i]!='\0')
    {
        //je garde un precedent pour pouvoir aider quand on va ajouté une celulle a la liste
        pre=recherche_lettre(mot[i],tree->enfants);
        if (pre==NULL)
        {
            //si c'est egale a null alors on peut ajouté la lettre
            tree=ajout_dune_lettre(mot[i],pre,tree);
        }
        else
        {
            //si la lettre est dega crée alors on continue dans l'arbre
            if(pre->node_lettre->lettre==mot[i])
            {
                tree=pre->node_lettre;
            }
                //sinon on ajoute la lettre
            else
            {
                tree=ajout_dune_lettre(mot[i],pre,tree);
            }
        }
        i++;
    }
    //a la fin on crée le mots flechis avec le mots que l'on vient d'ajouté
    tree->mots_flechis= creation_struct_mot_flechis(mot);
    return tree;
}

//verifier si on doit ajouter au mot flechis ou dans l'arbre.
p_node_letter verif_mot_ajoute(char mot[30],p_node_letter rac)
{
    p_node_letter verif_recherche= recherche_mot(mot,rac);
    p_nom temp;
    //si le mot existe pas on ajoute le mot
    if (verif_recherche==NULL)
    {
        temp=ajout_dun_mot(mot,rac);
        return temp;
    }
        //si il existe on va l'ajouter au mots flechis
    else
    {
        //essayer de le rajouter au mots flechis
        verif_recherche->mots_flechis->nb_mot_flechis+=1;
        return verif_recherche;
    }
}


//0 : verbe ; 1 : adverbe ; 2 : nom ; 3 : adjectif
void triage_arbre_et_ajout(char** mot,char** type,p_node_letter* tab_rac)
{
  p_node_letter temp;

  if(mot[2][0]=='V')
  {
      verif_mot_ajoute(mot[1],tab_rac[0]);
  }
  else if(mot[2][0]=='N')
  {
      verif_mot_ajoute(mot[1],tab_rac[2]);
  }
  else if(mot[2][0]=='A')
  {
      if(mot[2][2]=='j')
      {
          verif_mot_ajoute(mot[1],tab_rac[3]);
      }
      else if(mot[2][2]=='v')
      {
          verif_mot_ajoute(mot[1],tab_rac[1]);
      }
      else
      {
          temp=NULL;
          printf("impossible d'ajouté le mot :\t %s\t%s\t %s\n",mot[0],mot[1],mot[2]);
      }
  }
  else
  {
      printf("impossible d'ajouté le mot :\t %s\t%s\t %s\n",mot[0],mot[1],mot[2]);
      temp=NULL;
  }
}