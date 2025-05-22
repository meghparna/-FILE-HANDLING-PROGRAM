#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    FILE *fp;
    char data[100];

    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return;
    }

    printf("Enter data to write to the file: ");
    fflush(stdin); // clear input buffer
    fgets(data, sizeof(data), stdin);

    fprintf(fp, "%s", data);
    fclose(fp);
    printf("Data written successfully.\n");
}

void readFromFile() {
    FILE *fp;
    char data[100];

    fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("File does not exist or cannot be opened.\n");
        return;
    }

    printf("Reading data from file:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }
    fclose(fp);
}

void appendToFile() {
    FILE *fp;
    char data[100];

    fp = fopen("myfile.txt", "a");
    if (fp == NULL) {
        printf("Error opening file to append.\n");
        return;
    }

    printf("Enter data to append to the file: ");
    fflush(stdin); // clear input buffer
    fgets(data, sizeof(data), stdin);

    fprintf(fp, "%s", data);
    fclose(fp);
    printf("Data appended successfully.\n");
}

int main() {
    int choice;

    do {
        printf("\n==== FILE HANDLING MENU ====\n");
        printf("1. Write to File\n");
        printf("2. Read from File\n");
        printf("3. Append to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // flush newline character

        switch(choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please select 1-4.\n");
        }
    } while (choice != 4);

    return 0;
}
