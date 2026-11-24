/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter characters (press Ctrl+D on Linux/Mac or Ctrl+Z then Enter on Windows to stop):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, fp);
    }
    fclose(fp);

    
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nContent of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}