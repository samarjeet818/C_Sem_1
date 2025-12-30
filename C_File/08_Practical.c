#include <stdio.h>
#include <string.h> // Required for string comparison

int main() {
    char user[20], pass[20];
    printf("Enter Username: ");
    scanf("%s", user);
    printf("Enter Password: ");
    scanf("%s", pass);

    // strcmp returns 0 if strings match
    if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0) {
        printf("Login Successful\n");
    } else {
        printf("Invalid Login\n");
    }
    return 0;
}