#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet ACCORDING TO SCRABBLE GAME; here point 1 is for A or a, 3 for B or b
// and similarly point 10 for Z or z
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Has ASCII arrays value assigned to small letters for alphabets
int small_letters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

// Ascii Values for capital letters of alphabets
int capital_letters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
int temp_Points [] = {};


// Returns the number of letters in the word


// Returns the scrabble score for the word
in

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }

    return 0;
}


int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        // Check if the letter is a capital letter
        if (word[i] >= 65 && word[i] <= 90)
        {
            // Check if the letter is a capital letter
            for (int j = 0; j < 26; j++)
            {
                if (word[i] == capital_letters[j])
                {
                    score += POINTS[j];
                }
            }
        }
        // Check if the letter is a small letter
        else if (word[i] >= 97 && word[i] <= 122)
        {
            // Check if the letter is a small letter
            for (int j = 0; j < 26; j++)
            {
                if (word[i] == small_letters[j])
                {
                    score += POINTS[j];
                }
            }
        }
    }
