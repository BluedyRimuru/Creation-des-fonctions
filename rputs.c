#include <stdio.h>

int e89_puts(const char *str)
{
    int i = 0;
    int j = 0;
    
    while (str[i] != '\0')
    {
    i++;
    }
    
    while (str[i] != str[j])
    {
    putchar(str[i-1]);
    i--;
    }
    putchar('\n');
    return 0;
}

// Fonction de test //

int main () { 
    
    e89_puts("Salut je m'appel Jean.");
    return 0;
}
