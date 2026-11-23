/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

/* strindex: return index of first occurrence of pattern t in s, or -1 if none */
int strindex(const char s[], const char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

int main(void)
{
    char subject[MAXLINE], pattern[MAXLINE];
    int pos;

    printf("Enter subject string: ");
    if (fgets(subject, sizeof subject, stdin) == NULL)
        return 1;
    subject[strcspn(subject, "\n")] = '\0';   /* strip newline */

    printf("Enter pattern: ");
    if (fgets(pattern, sizeof pattern, stdin) == NULL)
        return 1;
    pattern[strcspn(pattern, "\n")] = '\0';

    pos = strindex(subject, pattern);

    if (pos >= 0)
        printf("Pattern found at position %d (0-based)\n", pos);
    else
        printf("Pattern not found\n");

    return 0;
}