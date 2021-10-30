#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

pile empile (int value, pile pl)
{
    pile p = malloc(sizeof(pile));
    p->value = value;
    p->next = pl;
    return p;
}

pile depile (pile pl)
{
    return pl->next;
}

Bool pEstVide (pile pl)
{
    if (pl == NULL)
        return true;
    else
        return false;
}

int sommet (pile pl)
{
    return pl->value;
}

void afficherPile (pile pl)
{
    if (!pEstVide(pl))
    {
        printf("-%d ", sommet(pl));
        afficherPile(depile(pl));
    }
}

pile multiEmpile (int nbr, int value, pile pl)
{
    if (nbr <= 0)
        return pl;
    else
    {
        pl = empile(value, pl);
        multiEmpile(nbr-1, value, pl);
    }
}

pile multiDepile (int nbr, pile pl)
{
    if (nbr <= 0)
        return pl;
    else
    {
        pl = depile(pl);
        multiDepile (nbr-1, pl);
    }
}