#include<stdio.h>
double garmonic_chisel(double a, double b)
{
    if (a == 0 || b == 0)
    {
        printf("Числа не должны быть нулевыми\n");
        return 0;
    }
    return 2.0 * a * b / (a + b);
}

int main(void)
{
    double chisel1, chisel2;
    printf("Введите два числа: ");
    scanf("lf lf", &chisel1, &chisel2);
    double resultat = garmonic_chisel(chisel1, chisel2);
    printf("Среднее гармоническое значение чисел %.2f и %.2f = %.2f\n", chisel1, chisel2, resultat);
    return 0;
}
