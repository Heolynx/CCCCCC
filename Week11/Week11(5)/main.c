#include <stdio.h>

int main() {
    char word1[50], word2[50], word3[50];
    FILE *file;

    printf("input a word: ");
    scanf("%s", word1);
    printf("input a word: ");
    scanf("%s", word2);
    printf("input a word: ");
    scanf("%s", word3);

    file = fopen("sample.txt", "w");
    fprintf(file, "%s\n", word1);
    fprintf(file, "%s\n", word2);
    fprintf(file, "%s\n", word3);
    fclose(file);

    return 0;
}

