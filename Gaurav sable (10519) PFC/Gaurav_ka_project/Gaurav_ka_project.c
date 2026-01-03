#include <stdio.h>

int main() {
    FILE *file;
    char title[50];
    char description[200];
    char feature1[50], feature2[50];
    char tech1[30], tech2[30];
    char ch;

    printf("===== AUTO README GENERATOR =====\n\n");
    printf("Enter Project Title: ");
    scanf(" %[^\n]", title);
    printf("Enter Project Description: ");
    scanf(" %[^\n]", description);
    printf("Enter Feature 1: ");
    scanf(" %[^\n]", feature1);
    printf("Enter Feature 2: ");
    scanf(" %[^\n]", feature2);
    printf("Enter Tech Stack 1: ");
    scanf(" %[^\n]", tech1);
    printf("Enter Tech Stack 2: ");
    scanf(" %[^\n]", tech2);
   
    file = fopen("README.md", "w");
    if (file == NULL) {
        printf("File cannot be created!\n");
        return 0;
    }
    fprintf(file, "# %s\n\n", title);
    fprintf(file, "## Description\n%s\n\n", description);
    fprintf(file, "## Features\n");
    fprintf(file, "- %s\n", feature1);
    fprintf(file, "- %s\n\n", feature2);
    fprintf(file, "## Tech Stack\n");
    fprintf(file, "- %s\n", tech1);
    fprintf(file, "- %s\n\n", tech2);
    fprintf(file, "## Output\n");
    fprintf(file, "README.md file ready to be pushed on GitHub\n");
    fclose(file);
    printf("\n README.md generated successfully!\n");
    
    file = fopen("README.md", "r");
    if (file == NULL) {
        printf("File open nahi ho pa rahi hai!\n");
        return 0;
    }
    printf("\n===== README.md FILE CONTENT =====\n\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}