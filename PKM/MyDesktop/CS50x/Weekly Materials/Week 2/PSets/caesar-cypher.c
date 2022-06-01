// Caesar's Cypher

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);

int main(int argc, string argv[])
{
    string s = string argv[1];

    // Check if the user entered the correct number of arguments
   if (argc = 2 && argv[1] != NULL && atoi(argv[1]) > 0)

    // Check if the user entered a valid key
    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
for
}

    // Check if the user entered a valid key
    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Get the plaintext from the user
    string plaintext = get_string("plaintext: ");

    // Print the ciphertext
    printf("ciphertext: ");

    // Loop through the plaintext
    char key = argv[1][0];
    int k = key - 'a';
    string text = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                printf("%c", ((text[i] - 'A' + k) % 26) + 'A');
            }
            else
            {
                printf("%c", ((text[i] - 'a' + k) % 26) + 'a');
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}

int rotate(int key, int n)
{
    if (isupper(n))
    {
        return ((n - 'A' + key) % 26) + 'A';
    }
    else
    {
        return ((n - 'a' + key) % 26) + 'a';
    }
}

bool only_digits(string argv[])
{
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    if (isupper(c))

    {
        return ((c - 'A' + n) % 26) + 'A';
    }
    else
    {
        return ((c - 'a' + n) % 26) + 'a';
    }
}