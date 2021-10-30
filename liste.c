#include "liste.h"
#include <stdlib.h>
#include <stdio.h>

int tete (Liste lst)
{
    return lst->val;
}

Liste queue (Liste lst)
{
    return lst->suivant;
}

int estVide (Liste lst)
{
    if (lst == NULL)
        return 1;
    return 0;
}

Liste CreerListe (Liste lst, int valeur)
{
    Liste p = NULL;
    p = malloc(sizeof(lst));
    p->val = valeur;
    p->suivant = lst;
    return p;
}

void afficherListe (Liste lst)
{
    if (!estVide(lst))
    {
        printf(" -%d ", lst->val);
        afficherListe(lst->suivant);
    }
}ù$

int isPresent (Liste lst, int valeur)
{
    if(estVide(lst))
        return 0;
    else
    {
        if (lst->val == valeur)
            return 1;
        else
            isPresent(lst->suivant, valeur);
    }
}

Liste delFirstCell (Liste lst)
{
    if (estVide(lst->suivant))
        return NULL;
    else
    {
        Liste p = lst->suivant;
        free(lst);
        return p;
    }
}

Liste delCellVal (Liste lst, int valeur)
{
    Liste p = lst;
    while (!estVide(p) || p->suivant->val != valeur)
    {
        p = p->suivant;
    }
    if (p->suivant->val == valeur)
    {
        Liste copyCell = p->suivant;
        p->suivant = p->suivant->suivant;
        free(copyCell);
    }
    return lst;
}

Liste unique (Liste lst)
{
    if (isPresent(lst->suivant, lst->val))
    {
        lst = unique(lst->suivant);
    }

    else
    {
        Liste p = lst;
        Liste p2 = p->suivant;
        while (!estVide(p2))
        {   
            if (isPresent(p2->suivant, p2->val))
            {
                p->suivant = delFirstCell(p2);
                p2 = p->suivant;
            }
            else
            {
                p = p->suivant;
                p2 = p2->suivant;
            }
        }

    }
    return lst;            
}