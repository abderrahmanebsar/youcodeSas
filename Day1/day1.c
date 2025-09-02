#include <stdio.h>

int main() {


    //Challenge 1

    // char nom[] = "bsar";
    // char prenom[] = "abderrahmane";
    // int age = 23;
    // char email[] = "exemple@exemple.com";
    // char sexe = 'M';


    // printf("nom : %s et le prenom : %s\n",nom,prenom);
    // printf("age : %d et le sexe : %c\n",age,sexe);
    // printf("email : %s\n",email);


    // //challenge 2

    // float c, k;
    // printf("Entrez la température en Celsius : ");
    // scanf("%f",&c);
    // k = c + 273.15;
    
    // printf("la température en Kelvin et :%.2f\n",k);


    //challenge 3

    // float yards, km;
    // printf("Entrez la distance en kilomètres : ");
    // scanf("%f",&km);
    
    // yards = km * 1093.61;

    // printf("La distance en yards : %.2f\n", yards);

    //challenge 4
    float kmh,ms;

    printf("Entrez  la vitesse en kilomètres par heure (km/h : ");
    scanf("%f",&kmh);

    ms = kmh * 0.27778;

    printf("la vitesse en  seconde (m/s): %.2f\n",ms);

    return 0;
}