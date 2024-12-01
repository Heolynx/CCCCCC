/* #include <stdio.h>

struct point {
    int x;
    int y;
};

int getArea(struct point p1, struct point p2) {
    return (p2.x - p1.x) * (p2.y - p1.y);
}

int main() {
    struct point p1, p2;
    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Input the coordinate p2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    int area = getArea(p1, p2);
    printf("Area: %d\n", area);

    return 0;
}
Passing the structure variable itself as a parameter.
*/

#include <stdio.h>

struct point {
    int x;
    int y;
};

int getArea(struct point *p1, struct point *p2) {
    return (p2->x - p1->x) * (p2->y - p1->y);
}

int main() {
    struct point p1, p2;
    printf("Input the coordinate p1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Input the coordinate p2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    int area = getArea(&p1, &p2);
    printf("Area: %d\n", area);

    return 0;
}
 // Passing the structure pointer as a parameter.

