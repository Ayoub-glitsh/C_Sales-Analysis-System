#include <stdio.h>
#include <stdlib.h>

int main(){
int M=3, P=2, i, j, indice, tmp;
static float V[3][2], VM[3], VP[2], total;
for(i=0 ; i<M ; i++){
        printf("Saisie pour le Mois %d:\n", i + 1);
    for(j=0 ; j<P ; j++){
        printf("Ventes du Produit %d: ", j + 1);
        printf("Entrer la valeur V[%d][%d]: ",i, j);
        scanf("%f",&V[i][j]);
        }
    }
printf("   \t");
    for(i=0 ; i<P ; i++)
        printf(" produits%d ",i+1);
        printf("\n");
    for(i=0 ; i<M ; i++){
        printf("mois%d   ",i+1);
        for(j=0 ; j<P ; j++){
            printf("%2f  ",V[i][j]);
        }
        printf("\n");
}
for (i = 0 ; i<M ; i++) {
        for (j = 0 ; j<P ; j++) {
            VM[i] += V[i][j];
            VP[j] += V[i][j];
            total += V[i][j];
        }
    }
printf("Total de produit pour:\n");

    for(i=0 ; i<M ; i++)
        printf("mois %d: %f\n",i+1,VM[i]);
printf("Total de mois pour:\n");

    for(j=0 ; j<P ; j++)
        printf("Produit %d: %f\n",j+1,VP[j]);

printf("Total de ventes est: %f\n",total);
indice=0;
for(i=1 ; i<M ; i++)
    if(VM[i]>VM[indice])
        indice=i;
printf(" le mois ayant le chiffre de vente le plus �lev� est le mois %d\n",indice+1);

indice=0;
for(j=1 ; j<P ; j++)
    if(VP[j]>VP[indice])
        indice=j;
printf("le produit le plus vendu est le produit %d\n",indice+1);
for (j = 0 ; j < P ; j++) {
        for (int k = 0; k < M - 1; k++) {
            for (i = 0; i < M - k - 1; i++) {
                if (V[i][j] > V[i+1][j]) {
                    tmp = V[i][j];
                    V[i][j] = V[i+1][j];
                    V[i+1][j] = tmp;
                }
            }
        }
    }
printf("Les ventes tri�s:\n\t");
    for(j = 0 ; j<P ; j++)
        printf("Prod%d\t\t", j+1);
    printf("\n");
    for (i = 0 ; i<M ; i++) {
        printf("Mois%d\t", i + 1);
        for (j = 0 ; j<P ; j++)
            printf("%f\t", V[i][j]);
        printf("\n");
    }

    return 0;









}




