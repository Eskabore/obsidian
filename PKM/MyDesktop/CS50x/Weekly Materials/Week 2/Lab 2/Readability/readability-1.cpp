#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    int cl = count_letters(text);
    int cw = count_words(text);
    int cs = count_sentences(text);
    printf("%d letters\n", cl);
    printf("%d words\n", cw);
    printf("%d sentences\n", cs);
}

int count_letters(string text)
{
    int n = strlen(text);
    char c[n];
    int i = 0;
    int count = 0;

do{
    for(i = 0; i < n; i++)
{
    c[i] = text[i];
    if (isalpha(c[i]) && !isspace(c[i]))
    {
        count++;
    }
}
} while (text[i] != '\0');

return count;
   }

int count_words(string text)
{
 int count = 1;
 int temp = 0;
 int i = 0;
 int n = strlen(text);
 int c[n + 1];

 while (text[i] != '\0')
 {
     c[i] = text[i];
     if (isspace(c[i]))
     {
         count++;
     }
     i++;
 }
 return count;
}

int count_sentences(string text)
{
    int i = 0;
    int count = 0;
    int n = strlen(text);
    int c[n + 1];

    while (text[i] != '\0')
    {
        c[i] =text[i];
        if (c[i] == '.' || c[i] == '?' || c[i] == '!')
        {
            count++;
        }
        i++;
    }
    return count;
}