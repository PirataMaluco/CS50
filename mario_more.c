 /* ***************************************************************************
  *  Week 01 || Problem Set 01  || mario_more.c ||  Cláudio Dias - 26.02.2023 *
  * ************************************************************************* */

#include <cs50.h>
#include <stdio.h>

// Call Functions
void Row(int n, char ch);
void Pyramid(int n);
int get_height(void);

// Main
int main(void)
{
    int height = get_height();
    Pyramid(height);
}

// Set Value for Height of Pyramid
int get_height(void)
{
    int ht = 0;
    do
    {
        ht = get_int("Height: ");
    }
    while (ht < 1 || ht > 8);
    return ht;
}

// Set function to Draw Pyramid
void Row(int n, char ch)
{
    while (n--)
    {
        putchar(ch);
    }
}

// Dray Pyramid
void Pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        Row(n - i, ' ');
        Row(i, '#');
        putchar(' ');
        putchar(' ');
        Row(i, '#');
        putchar('\n');
    }
}
