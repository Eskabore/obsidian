#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int compute_score(string word) 
{
    int scrore = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // Convert to lowercase
        word[i] = tolower(word[i]);
        // Check if the letter is a letter
        if (isaplhabet(word[i]))
        {
            // Add the points to the score
            score += points[word[i] - 'a'];
        }
        
    }
}