/*
DDU'30
B.Tech IT090
Sanvi Antani
*/
#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, num, sum = 0, count = 0;
    float avg;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // Write integers to the file
    fp = fopen("numbers.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);

    // Read them back
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nNumbers read from file:\n");
    while (fscanf(fp, "%d", &num) == 1) {
        printf("%d ", num);
        sum += num;
        count++;
    }
    fclose(fp);

    if (count > 0) {
        avg = (float)sum / count;
        printf("\n\nSum = %d", sum);
        printf("\nAverage = %.2f\n", avg);
    } else {
        printf("\nNo numbers found in file.\n");
    }

    return 0;
}