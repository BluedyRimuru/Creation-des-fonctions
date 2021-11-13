#include <stdio.h>

int e89_puts(const char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
    putchar(str[i]);
    i++;
    }
    putchar('\n');
    return 0;
}

// fonction de test //

int main () { 
    
    e89_puts("Salut je m'appel Jean.");
    return 0;
}
