
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string words);
int count_sentences(string sentences);

int main(void)
{
    // Set Variables
    float index = 0;
    float L = 0;
    float S = 0;
    int grade = 0;

    // Get text from user
    string sample = get_string("Text: ");

    int letters_ = count_letters(sample);
    int words_ = count_words(sample);
    int sentences_ = count_sentences(sample);

    // Calculate average
    L = ((float) letters_ / (float) words_) * 100;
    S = ((float) sentences_ / (float) words_) * 100;

    // Calculate Coleman-Liau Index and Grade
    index = ((0.0588 * L) - (0.296 * S)) - 15.8;
    grade = (int) round(index);

    // Print Grade
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

// Count Letters from the Text
int count_letters(string letters)
{
    int cntlet = 0;
    for (int i = 0; letters[i] != '\0'; i++)
    {
        if (isalpha(letters[i]) != 0)
        {
            cntlet++;
        }
    }
    return cntlet;
}

// Count Words from the Text
int count_words(string words)
{
    int cntword = 1;
    for (int j = 0; words[j] != '\0'; j++)
    {
        if (words[j] == ' ' || words[j] == '\0')
        {
            cntword++;
        }
    }
    return cntword;
}

// Count Sentences from the Text
int count_sentences(string sentences)
{
    int cntsent = 0;
    for (int k = 0; sentences[k] != '\0'; k++)
    {
        if (sentences[k] == '.' || sentences[k] == '!' || sentences[k] == '?')
        {
            cntsent++;
        }
    }
    return cntsent;
}
