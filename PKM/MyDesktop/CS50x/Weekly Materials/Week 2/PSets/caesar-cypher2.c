// Author: Eskabore
// Purpose: Use Caesar's cypher  method to encrypt messages
// Language C
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Make sure programm was run with just one command-line argument
    int k = 2;
        if (argc != k)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure key is a positive integer
    if (only_digits(argv[1])  == false)
    {
        printf("Usage: . caesar key\n");
        retrun 1;
    }

    // convert key to integer
    int key = atoi(argvp[1]);
    
    // Get plaintext from user
    string plaintext = get_string("plaintext:");

    // ENcrypt plaintext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            printf("%c", rotate(plaintext[i], key));
        }
        else
        {
            printf("%c", plaintext[i]);
        }

    }


    return 0;
}


bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
    }
    return true;
}

// Checking the key

bool only_digits(string argv[1])
{

}
        if (s[i] < '0' || s[i] > '9')
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    // Make sure the character is a letter
    if (c >= 'a' && c <= 'z')
    {
        // Convert to ASCII
        int ascii = c - 'a';
        // Add key to ascii
        ascii = (ascii + n) % 26;
        // Convert back to character
        c = ascii + 'a';
    }
    // Make sure the character is a letter
    else if (c >= 'A' && c <= 'Z')
    {
        // Convert to ASCII
        int ascii = c - 'A';
        // Add key to ascii
        ascii = (ascii + n) % 26;
        // Convert back to character
        c = ascii + 'A';
    }
    return c;
}

