#include<stdio.h>
#include<wchar.h>
#include<locale.h>
void funkcia (wchar_t simvol, int dlina, int stroki)
{
    if (dlina > 1000 || stroki > 1000)
    {
        wprintf(L"Слишком большие числа!\n");
        return;
    }
    if (dlina <= 0 || stroki <= 0)
    {
        wprintf(L"Числа дорлжны быть больше 0!\n");
        return;
    }
    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < dlina; j++)
        {
            wprintf(L"%lc", simvol);
        }
        wprintf(L"\n");
    }
}

int main(void)
{
    setlocale(LC_ALL, "");
    wchar_t simvol;
    int dlina, stroki;
    wprintf(L"Введите символ: ");
    wscanf(L"%lc", &simvol);
    wprintf("Введите длину: ");
    if (wscanf(L"%d", &dlina) != 1)
    {
        wprintf(L"Ошибка вводв!\n");
        return 1;
    }
    wprintf("Введите кол-во строк: ");
    if (wscanf(L"%d", &stroki) != 1)
    {
        wprintf(L"Ошибка ввода!\n");
        return 1;
    }
    wprintf("\nРезультат\n");
    funkcia(simvol, dlina, stroki);
    return 0;
}
