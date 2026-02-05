#include <stdio.h>


double myFunc(double Zahl1, double Zahl2, char operator);

int main(void) {
    char operator;
    double Zahl1, Zahl2, result;

    printf("Gib einen Operator ein (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Gib die erste Zahl ein: ");
    scanf("%lf", &Zahl1);

    printf("Gib die zweite Zahl ein: ");
    scanf("%lf", &Zahl2);

    
    result = myFunc(Zahl1, Zahl2, operator);

    printf("Das Ergebnis ist: %.2lf\n", result);

    return 0;
}


double myFunc(double Zahl1, double Zahl2, char operator) {
    double result = 0;

    switch (operator) {
        case '+':
            result = Zahl1 + Zahl2;
            break;
        case '-':
            result = Zahl1 - Zahl2;
            break;
        case '*':
            result = Zahl1 * Zahl2;
            break;
        case '/':
            if (Zahl2 != 0) {
                result = Zahl1 / Zahl2;
            } else {
                printf("Fehler: Division durch Null!\n");
            }
            break;
        default:
            printf("Ungültiger Operator!\n");
    }

    return result;
}