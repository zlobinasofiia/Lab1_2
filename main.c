#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//Математична функція
double f(double x){
return 0.4 * pow(x-100, 3) + 03.* pow(x, 2) - 0.2 * x + 200;
}

int main()
{
    int variant = 0;
    double x1, x2, delta;
    unsigned int N;

    while (variant !=1 && variant !=2){
        printf("Oberit variant (1 - za N, 2 - za delta): ");
        scanf("%d", &variant);
        if (variant !=1 && variant !=2){
            printf("Pomylka! Vvedit 1 abo 2.\n");
        }
    }
    printf("Vvedit X1: ");
    scanf("%lf", &x1);
    printf("Vvedit X2: ");
    scanf("%lf", &x2);

    if (variant == 1) {
        printf("Vvedit kilkist tochok N: ");
        scanf("%u", &N);
        delta = (x2-x1)/(N-1);
    } else {
        printf("Vvedit krok delta: ");
        scanf("%lf", &delta);
        N = (unsigned int)((x2-x1)/delta)+1;
    }
    printf("\nX1=%.2lf, X2=%2lf, delta=%.2lf\n\n", x1, x2, delta);
    printf("*******************************************************\n");
    printf("*   N  *   X     *    F(X)*\n");
    printf("*******************************************************\n");
    printf("+-----+------------------+-----------------------------+\n");

    int line_count = 0;
    int is_first_screen = 1;
    double prev_x = x1;
    double prev_y = f(x1);

    for (unsigned int i = 1; i<=N; i++){
        double x = x1 + (i-1) * delta;
        double y = f(x);

        printf("|%5u|%18.2lf|%21.2lf|\n", i, x, y);
        printf("+-----+------------------+--------------------------+\n");

        if (i > 1 && prev_y*y<=0){
            printf(" --> Korin na intervali: [%.2lf; %.2lf}\n", prev_x, x);
            printf("+-----+------------------+-------------------------+\n");
        }
        prev_x=x;
        prev_y=y;
    }
    getch();
    return 0;
}
