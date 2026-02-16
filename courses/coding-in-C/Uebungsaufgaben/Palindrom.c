#include <stdio.h>
#include <string.h>

int isPalindrome(const char word[]) {
    int left = 0;
    int right = strlen(word) - 1;

    while(left < right) {
        if(word[left] != word[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char word[101];

    printf("Bitte geben Sie Ihr Wort ein (maximal 100 Zeichen): ");
    scanf("%100s", word);

    if(isPalindrome(word))
        printf("Ihr angegebenes Wort \"%s\" ist ein Palindrom.\n", word);
    else
        printf("Das von dir angegebene Wort \"%s\" ist kein Palindrom.\n", word);

    return 0;
}