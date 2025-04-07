// #include <stdio.h>
// #include <stdlib.h>

// int password(int length)
// {
//     int password_length;
//     char character='Q,W,E,R,T,Y,U,I,O,P,A,S,D,F,G,H,J,K,L,Z,X,C,V,B,N,M,1,2,3,4,5,6,7,8,9,0,!,@,#,$,%,^,&,*';
//     char password[password_length];
//     for (int i = 0; i < length; i++)
//     {



//     }
    
// }
// int main() {
    
//     srand(time(0));

    
//     int randomNumber = rand();
//     printf("Random number: %d\n", randomNumber);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 100

// Function to generate a random password
void generatePassword(int length) {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$^&*()_+[]{}|;:,.<>?";
    char password[MAX_PASSWORD_LENGTH];

    for (int i = 0; i < length; ++i) {
        password[i] = characters[rand() % strlen(characters)];
    }
    password[length] = '\0'; // Null-terminate the password

    printf("Generated Password: %s\n", password);
}

int main() {
    int length;

    // Seed the random number generator
    srand(time(0));

    // Get the desired password length from the user
    printf("Enter the length of the password: ");
    scanf("%d", &length);

    // Generate the password based on the specified length
    generatePassword(length);

    return 0;
  
}
