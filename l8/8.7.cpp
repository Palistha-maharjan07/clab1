#include <stdio.h>
#include <conio.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int n, num;
    printf("Enter the number of integers (N): ");
    scanf("%d", &n);
    dataFile = fopen("data.txt", "w");
    if (dataFile == NULL) {
        printf("Error opening data.txt\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(dataFile, "%d ", num);
    }
    fclose(dataFile);
    dataFile = fopen("data.txt", "r");
    if (dataFile == NULL) {
        printf("Error reading data.txt\n");
        return 1;
    }
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    if (oddFile == NULL || evenFile == NULL) {
        printf("Error creating output files\n");
        fclose(dataFile);
        return 1;
    }

    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d ", num);
        } else {
            fprintf(oddFile, "%d ", num);
        }
    }

    printf("Numbers separated successfully!\n");
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    getch();
}
