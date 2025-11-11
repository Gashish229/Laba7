#include<stdio.h>
int Fibonacci(int chisel)
{
    if (chisel <= 0)
    {
        return 0;
    }
    if (chisel == 1) 
    {
        return 1;
    }
    int pred_chisel = 0;
    int tekush_chisel = 1;
    int sled_chisel;
    for (int i = 2; i <= chisel; i++)
    {
        sled_chisel = pred_chisel + tekush_chisel;
        pred_chisel = tekush_chisel;
        tekush_chisel = sled_chisel;
    }
    return tekush_chisel;
}

int main(void)
{
    int chisel;
    printf("Введите номер числа Фибоначчи: ");
    scanf("%d", &chisel);
    printf("F(%d) = %d\n", chisel, Fibonacci(chisel));
    return 0;
}
