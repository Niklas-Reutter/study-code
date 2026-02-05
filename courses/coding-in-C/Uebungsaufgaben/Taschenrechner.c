#include <stdio.h>

int main(void) {
    char operator;
    double Zahl1, Zahl2, result;
    
    printf("Geb einen Opertor ein (+, -, *, /):");
    scanf(" %c", &operator);

    printf("Geb die erste Zahl ein:");
    scanf("%lf", &Zahl1);

    printf("Geb die zweite zahl ein:");
    scanf(" %lf", &Zahl2);

    switch(operator){
        case '+':
            result = Zahl1 + Zahl2;
            printf("%.2lf+%.2lf = %.2lf\n", Zahl1, Zahl2, result);
            break;

        case '-':
            result = Zahl1 - Zahl2;
            printf("%.2lf - %.2lf = %.2lf\n", Zahl1, Zahl2, result);
            break;
        case '*':
            result = Zahl1 * Zahl2;
            printf("%.2lf * %.2lf = %.2lf\n", Zahl1, Zahl2, result);
            break;
        case '/':
            if (Zahl2 != 0) {
                result = Zahl1 / Zahl2;
                printf("%.2lf / %.2lf = %.2lf\n", Zahl1, Zahl2, result);
            } else {
                printf("Fehler: Division durch Null ist nicht erlaubt.\n");
            }
            break;
        default:
            printf("Ungültiger Operator.\n");
    }

}
