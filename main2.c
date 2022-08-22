#include <stdio.h>
#include <stdlib.h>

float prix;
char *C, *V;
int D, B, A;

float lait(int nbL)
{
    if( A == 1 || A == 3 )
    {
        if (nbL == 1)
        {
            prix = prix + 1;
        }
        else if (nbL == 0)
        {
            prix = prix;
        }
    }
    return prix;
}
char laitC(int nbLC)
{
    if( A == 1 || A == 3 )
    {
        if(nbLC == 1)
        {
            C = "Avec le lait";
        }
        else
        {
            C = "Sans lait";
        }
    }
    else
    {
        C = "";
    }
    return C;
}
float soucre(int nbS)
{
    if(A == 1 || A == 2 || A == 3)
    {
        if (nbS == 1)
        {
            prix = prix + 0.25;
        }
        else if (nbS == 2)
        {
            prix = prix + 0.50;
        }
    }

    return prix;
}
char soucreV( nbSV)
{
    if(A == 1 || A == 2 || A == 3)
    {
        if(nbSV == 1)
        {
            V = "sucree";
        }
        else if(nbSV == 0)
        {
            V = "non suree";
        }
        else
        {
            V = "tres suree";
        }
    }
    else
    {
        V = "";
    }
    return V;
}
void QS()
{
    if(A == 1 || A == 2 || A == 3)
    {
        do
        {
            printf("Choisir la quantite de soucre:(Si oui entrer 1 si non entrer 0 si tres sucres entrer 2)\n");
            scanf("%d",&D);
        }
        while(D != 0 && D != 1 && D != 2);
    }

    return D;
}
void QL()
{
    if( A == 1 || A == 3 )
    {
        do
        {
            printf("Voulez-vous ajouter le lait ?(Si oui entrer 1 si non entrer 0)\n");
            scanf("%d", &B);
        }
        while(B!=0 && B!=1);
    }

    return B;
}


int main()
{
    char *Y, W;
    do
    {
        do
        {
            printf("Veuillez enter votre choix\n");
            printf("Soit : 'cafe' entrer 1, 'The' entrer 2, 'chocolat' entrer 3, 'Soda' entrer 4\n");
            printf("****************************************\n");
            scanf("%d", &A);
        }
        while(A!=1 && A!=2 && A!=3 && A!=4);

        switch (A)
        {
        case 1 :
            Y = "cafe";
            prix = 2;
            break;
        case 2 :
            Y = "The";
            prix = 2;
            break;
        case 3 :
            Y = "chocolat";
            prix = 3.5;
            break;
        case 4 :
            prix = 3;
            Y = "Soda";
            break;
        }
        QL();
        lait(B);
        laitC(B);
        QS();
        soucre(D);
        soucreV(D);
        printf("Vous devez payer %f DH\n", prix);
        printf("Votre %s est %s %s pret",Y, V, C );
        do
        {
            printf("\nSi vous voullez refaire une autre commende clique sur Y, si non clique sur Q\n");
            scanf("%s", &W);
        }
        while(W != 'Y' && W != 'Q');
    }
    while(W != 'Q');
    exit(0);
}
