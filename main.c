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
    return 0;
}
