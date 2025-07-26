#include <stdio.h>
main() {
    FILE *fp;
    char str[] = "My Name is chirag !";
    char buffer[100];

    // Step 1: Create and write to the file
    fp = fopen("File Handling.txt", "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(fp, "%s", str);  // Write string to the file
    fclose(fp);  // Close the file

    // Step 2: Reopen the file for reading
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Step 3: Read and display contents
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
}
