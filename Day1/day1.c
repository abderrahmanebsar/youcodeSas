#include <stdio.h>
#include <math.h>

int main() {


    //le variables==========================================
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
    // float kmh,ms;

    // printf("Entrez  la vitesse en kilomètres par heure (km/h : ");
    // scanf("%f",&kmh);

    // ms = kmh * 0.27778;

    // printf("la vitesse en  seconde (m/s): %.2f\n",ms);

    // return 0;

    //challenge 5

    // float C;

    // printf("Entrez la température en Celsius: ");
    // scanf("%f",&C);

    // if (C < 0) {
    //     printf(" l'eau à cette température et Solide\n");
    // }else if (C >=0 && C < 100) {
    //     printf(" l'eau à cette température et Liquide\n");
    // }else{
    //     printf(" l'eau à cette température et Gaz\n");
    // }

    //challenge 6

    // double a,b;

    // printf("enter two number (a and b) : ");
    // scanf("%lf %lf", &a, &b);

    // if (b != 0){
    //     printf("a + b = %.2lf\n", a + b);
    //     printf("a - b = %.2lf\n", a - b);
    //     printf("a * b = %.2lf\n", a * b);
    //     printf("a / b = %.2lf\n", a / b);
    // }else {
    //     printf("division by zero not allowed!");
    // }



    //challenge 7

    // float num1, num2, num3;
    // float weighted_average;
    // int weight1=2, weight2 = 3,weight3=5;

    // int total_weight = weight1 + weight2 + weight3;

    // printf("enter the first number: ");
    // scanf("%f",&num1);

    // printf("enter the second number: ");
    // scanf("%f",&num2);

    // printf("enter the thrid number: ");
    // scanf("%f",&num3);

    // weighted_average = (num1 * weight1 + num2 * weight2 + num3 * weight3  ) / total_weight;

    // printf("the weight average is %.2f\n",weighted_average);


    //challenge 8

    // float a,b,c;
    // float moy_ger;

    // printf("enter the first number: ");
    // scanf("%f",&a);

    // printf("enter the second number: ");
    // scanf("%f",&b);

    // printf("enter the thrid number: ");
    // scanf("%f",&c);

    // moy_ger = pow((a * b * c), 1.0 / 3.0);

    // printf("la moyenne géométrique et: %.2f\n", moy_ger);


    //challenge 9

    // double x1, y1, z1, x2, y2, z2, distance;

    // printf("Entrez les coordonnées du premier point (x1, y1, z1) : ");
    // scanf("%lf %lf %lf", &x1, &y1, &z1);

    // printf("Entrez les coordonnées du deuxième point (x2, y2, z2) : ");
    // scanf("%lf %lf %lf", &x2, &y2, &z2);

    // double dx = x2 - x1;
    // double dy = y2 - y1;
    // double dz = z2 - z1;

    // distance = sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));

    // printf("La distance est : %.2lf\n", distance);

    // return 0;


    //challenge 12

    int num, reversed;
    int d1,d2,d3,d4;
    

    printf("enter a numer à quatre chiffres : ");
    scanf("%d",&num);
    
    d1 = num / 1000;
    d2 = (num / 100) % 10;
    d3 = (num /10) % 10;
    d4 = num % 10;
    // remainder = num % 10;   //get the last digite
    // reverse = reverse * 10 + remainder;
    // num = num / 10;
    
    reversed = d4 * 1000 + d3 *100 + d2 * 10 + d1;
    
    printf("the remainder : %d",d1);

    return 0;

    //challenge 13




    //condition ========================

    //challenge 1
        // int num;

        // printf("Entrez un nombre: ");
        // scanf("%d", &num);

        // if (num % 2 == 0 ){
        //     printf("Le nombre est pair\n");
        // }else {
        //     printf("le nomber et impair\n");
        // }

        //challange 2

    //     char ch;

    //     printf("enter a character : ");
    //     scanf("%c",&ch);

    //     switch (ch)
    //     {
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //     case 'A':
    //     case 'E':
    //     case 'I':
    //     case 'O':
    //     case 'U':
    //     printf("The character '%c' is a vowel.\n", ch);
    //         break;
    //     default:
    //     printf("The character '%c' is not a vowel.\n", ch);
    //     }

    // return 0;


    //challenge 8 condition 2

    int age, md;

    printf("enterz moi le age : ");
    scanf("%d",&age);

    printf("enterz moi le Historique médical : ");
    scanf("%d",&age);

    if ( age < 30 ) {
        printf("Plan de base");
    }else if ( age >= 30 && md == 0) {
        printf("Plan de base");
    }else if (age >= 30 && md >= 1) {
        printf("Plan étendu");
    }


    //boucle

    //challenge 1

    // int num ;
    
    // printf("enter the mult number :");
    // scanf("%d",&num);

    // for (int i = 1; i <= 10;i++){
    //     printf("%d * %d = %d", num, i, num * i);
    // }

    //challenge 2

    // int num,n=1;

    // printf("enter un positive numbr : ");
    // scanf("%d",&num);

    // if (num > 0){
    //     for (int i = 1;i <= num; i++)
    //     {
    //         n *=  i;
    //     }
        
    //     printf("factorielle : %d",n);
    // }else{
    //     printf("enter a number positive!");
    // }


    //challenge 3

    int num,sum;

    printf("enter un positive numbr : ");
    scanf("%d",&num);

    for(int i =1; i < num; i++){
        sum +=i;
    }

    printf("la sum et : %d",sum);
}