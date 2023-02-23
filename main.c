#include <stdio.h>
#include <stdlib.h>

int main()
{int m ,somme=0,sous=0,produit=0 ,n = 0, b = 0 ;
/*Les variables n'ont pas été déclaré    */
   int reponse = 1;
float div;
    printf("bienvenue chez orca \n ");
    printf("taper 1 pour faire les opérations ou 2 pour ne rien faire");
     scanf("%d",&reponse);

    if (reponse == 2){
    printf("Au revoir merci \n");
}
if (reponse == 1){
    printf(" tapez un chiffre: ");
    scanf("%d",&m);
    printf("tapez un chiffre: ");
    scanf("%d",&n);
    somme=m+n;
    sous=m-n;
    produit=m*n;

    div= (float)m/(float)b;
    if(m==0|| n==0){
        printf("division impossible\n");
    }
    if(m== 0&& n==0){
        printf("%d / %d=%.f",m,n,div);
    }
    div=(float)m/(float)n;

    printf("%d+%d=%d \n",m,n,somme);
    printf("%d-%d=%d \n",m,n,sous);
    printf("%d*%d=%d \n",m,n,produit);
    printf("%d / %d=%.f",m,n,div);

}


 return 0;


}




