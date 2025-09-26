#include <stdio.h>

int main() {
    int physics, chemistry, maths, total, totalMathsPhysics;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    total = physics + chemistry + maths;
    totalMathsPhysics = maths + physics;

    printf("\nTotal marks of Maths, Physics and Chemistry: %d\n", total);
    printf("Total marks of Maths and Physics: %d\n", totalMathsPhysics);

    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) ||
        (totalMathsPhysics >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

