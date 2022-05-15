#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Caesar cipher key
    int key = atoi(argv[1]);
    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    // Print ciphertext
    printf("ciphertext: ");

    // Loop through each character in plaintext

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        // If character is a letter
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            // Convert to ASCII
            int ascii = plaintext[i] - 'a';
            // Add key to ascii
            ascii = (ascii + key) % 26;
            // Convert back to character
            plaintext[i] = ascii + 'a';
        }
        // If character is a letter
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            // Convert to ASCII
            int ascii = plaintext[i] - 'A';
            // Add key to ascii
            ascii = (ascii + key) % 26;
            // Convert back to character
            plaintext[i] = ascii + 'A';
        }
        // Print character
        printf("%c", plaintext[i]);
    }
    // check if the user input is correct
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // get the key
    int key = atoi(argv[1]);

    }
}