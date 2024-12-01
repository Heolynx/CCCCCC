#include <stdio.h>
#define STUDENTNUM 4

struct student {
    int ID;
    int score;
};

void main(void) {
    struct student s[STUDENTNUM];
    int i;
    double average = 0.0;
    int highestScore = 0;
    int highestID = 0;

    for (i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);
        printf("Input the score: ");
        scanf("%d", &s[i].score);

        average += s[i].score;

        if (s[i].score > highestScore) {
            highestScore = s[i].score;
            highestID = s[i].ID;
        }
    }

    average /= STUDENTNUM;

    printf("The average of the score: %.6lf\n", average);
    printf("The highest score - ID: %d, score: %d\n", highestID, highestScore);

    return 0;
}

