#include <stdio.h>
#include <ctype.h> // check types easily
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) printf("It is an Alphabet.\n");
    else if (isdigit(ch)) printf("It is a Digit.\n");
    else printf("It is a Special Character.\n");
    return 0;
}