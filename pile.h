#ifndef __PILE__H__
#define __PILE__H__

typedef struct pileElement
{
    int value;
    struct pileElement *next;
}pileElement, *pile;

typedef enum Bool
{
    false = 0,
    true = 1
}Bool;

pile empile (int value, pile pl);
pile depile (pile pl);
Bool pEstVide (pile pl);
int sommet (pile pl);
void afficherPile (pile pl);
pile multiEmpile(int nbr, int value, pile pl);
pile multiDepile (int nbr, pile pl);

#endif