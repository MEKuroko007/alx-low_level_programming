#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - function to reverse string
 * @s : char
*/

int main(void){
    char str[]="hello world ";
    printf("%s",str);
    print_rev(str);
    printf("%s",str);
}
void print_rev(char *s)
{
int i;
int lenght = strlen(s);
int middle = lenght / 2;
char tmp;

for (i = 0 ; i < middle ; i++)
{
tmp = s[i];
s[i] = s[lenght - i - 1];
s[lenght - i - 1] = tmp;
}
}
