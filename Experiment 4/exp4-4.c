/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main(void)
{
    int c;
    long blanks = 0, tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    }

    printf("Blanks:   %ld\n", blanks);
    printf("Tabs:     %ld\n", tabs);
    printf("Newlines: %ld\n", newlines);

    return 0;
}