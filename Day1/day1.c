#include <stdio.h>

int main() {


    //Challenge 1

    char nom[] = "bsar";
    char prenom[] = "abderrahmane";
    int age = 23;
    char email[] = "exemple@exemple.com";
    char sexe = 'M';


    printf("nom : %s et le prenom : %s\n",nom,prenom);
    printf("age : %d et le sexe : %c\n",age,sexe);
    printf("email : %s\n",email);


    //challenge 2

    float c, k;
    printf("Entrez la température en Celsius : ");
    scanf("%f",&c);
    k = c + 273.15;
    
    printf("la température en Kelvin et :%.2f\n",k);
}