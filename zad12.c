#include<stdio.h>
#include<wchar.h>
#include<locale.h>
#include<limits.h>
int main(void)
{
    setlocale(LC_ALL, "");
    unsigned long long count = 0;
    wint_t ch;
    wprintf(L"Введите текст(Ctrl+D для завершения): ");
    while((ch = getwchar()) != WEOF)
    {
        if (count == ULLONG_MAX)
        {
            wprintf("!!Достигнут максимальный предел счётчика!!\n");
            break;
        }
        count++;
    }
    wprintf(L"Кол-во символов равно: %llu\n", count);
    return 0;
}
