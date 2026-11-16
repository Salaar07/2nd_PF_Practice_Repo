
#include <stdio.h>
int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    printf("Rectangle 1 (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("Rectangle 2 (x3 y3 x4 y4): ");
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    int cond = (x2 <= x3) || (x4 <= x1) || (y4 <= y1) || (y2 <= y3);

    if (cond)
        printf("Non Overlap");
    else
    	
        printf("Overlap");

    return 0;
}
