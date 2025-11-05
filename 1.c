#include<stdio.h>
int main(void)
{
    int count = 0;
    int ch;
    printf("Введите текст: \n");
    while ((ch = getchar()) != EOF)
    {
        count++;
    }
    printf("Кол-во введенных символов = %d\n", count);
    return 0;
}
