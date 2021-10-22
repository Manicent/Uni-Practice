#include <stdio.h>
#include <ctype.h>
int main()
{
    char alphabet;
    scanf("%c", &alphabet);
    switch(tolower(alphabet))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}