 /* **********************************************************************
  *  Week 01 || Problem Set 01  || hello.c ||  Cláudio Dias - 25.02.2023 *
  * ******************************************************************** */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for name
    string name = get_string("What's your name: ");

    // print Hello and name
    printf("Hello, %s!\n", name);
}
