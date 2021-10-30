#ifndef _LISTE_H_
#define _LISTE_H_

typedef struct Cellule
{
    int val;
    struct Cellule *suivant;
}*Liste;

int tete (Liste lst);
Liste queue (Liste lst);
int estVide (Liste lst);

Liste CreerListe (Liste lst, int valeur);
void afficherListe(Liste lst);
Liste multiCreerListe (Liste lst, int valeur, int nbr);
Liste ajouterFin (Liste lst, int valeur);
Liste multiAjouterFin (Liste lst, int valeur, int nbr);
int isPresent (Liste lst, int valeur);
Liste delFirstCell (Liste lst);
Liste delCellVal (Liste lst, int valeur);
Liste unique (Liste lst);

#endif