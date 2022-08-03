#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *Y, *C, *X;
    int A, B, D;
    float R, S;

        printf("Veuillez enter votre choix\n");
        printf("Soit : 'cafe' entrer 1, 'The' entrer 2, 'chocolat' entrer 3, 'Soda' entrer 4\n");
        printf("****************************************\n");
        scanf("%d", &A);

        switch (A){
        case 1 :      Y = "cafe";
                      printf("Voulez-vous ajouter le lait ?(Si oui entrer 1 si non entrer 0)\n");
	                  scanf("%d", &B);
			          if (B == 1){
                          R = 3;
				          C = "Avec le lait";
                      }
			          else if (B == 0){
                          R = 2;
					      C = "Sans lait";
                      }
			               else {
                            printf("Voulez-vous ajouter le lait ?(Si oui entrer 1 si non entrer 0)\n");
			               }

			          printf("Choisir la quantite de soucre:(Si oui entrer 1 si non entrer 0 si tres sucres entrer 2)\n");
	                  scanf("%d",&D);
			          if (D == 1) {
                          S = R + 0.25;
                          X = "sucree";
			          }
                      else if (D == 0) {
                               S = R;
					           X = "non suree";
                      }
					       else if (D == 2){
                                    S = R + 0.50;
					                X = "tres suree";
					       }
                                else {
                                 printf("Choisir la quantité de soucre:(Si oui entrer 1 si non entrer 0 si tres sucrés entrer 2)\n");
                                }

                    printf("Vous devez payer %f DH\n", S);
                    printf("Votre %s esr %s %s pret",Y, X, C );
                    break;
        case 2 :     Y = "The";
                     printf("Choisir la quantite de soucre:(Si oui entrer 1 si non entrer 0 si tres sucres entrer 2)\n");
	                 scanf("%d",&D);
			         R = 2;
			         if (D == 1) {
                         S = R + 0.25;
				         X = "sucree";
			         }
			         else if (D == 0){
                              S = R;
					          X = "non suree";
			         }
                          else if(D == 2){
                                  S = R + 0.50;
					              X = "tres suree";
                          }
					           else {
                                printf("Choisir la quantité de soucre:(Si oui entrer 1 si non entrer 0 si trés sucrés entrer 2\n)");
					           }
                    printf("Vous devez payer %f DH\n", S);
                    printf("Votre %s esr %s pret",Y, X );
                    break;
        case 3 :          Y = "chocolat";
                          printf("Voulez-vous ajouter le lait ?(Si oui entrer 1 si non entrer 0)\n");
	                      scanf("%d",&B);
                          if (B == 1) {
                              R = 3.5;
				              C = "Avec le lait";
                          }
			              else if (B == 0){
                                   R = 2.5;
                                   C = "Sans lait";
			              }
                               else {
                                printf("Voulez-vous ajouter le lait ?(Si oui entrer 1 si non entrer 0)\n");
                            }
			              printf("Choisir la quantité de soucre:(Si oui entrer 1 si non entrer 0 si trés sucrés entrer 2)\n");
	                      scanf("%d", &D);
			              if (D == 1) {
                              S = R + 0.25;
				              X = "sucree";
                          }
			              else if (D == 0){
                                   S = R;
					               X = "non suree";
			              }
                               else if (D == 2){
                                        S = R + 0.50;
                                        X = "trés suree";
					           }
                                    else {
                                     printf("Choisir la quantité de soucre:(Si oui entrer 1 si non entrer 0 si trés sucrés entrer 2)\n");
                                    }
                   printf("Vous devez payer %f DH\n", S);
                   printf("Votre %s esr %s %s pret",Y, X, C );
			       break;
     case 4 : S = 3;
              Y = "Soda";
              printf("Vous devez payer %f DH\n", S);
              printf("Votre %s est pret",Y );
              break;
     default : printf("Erreur");
    }

}
