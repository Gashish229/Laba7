#include<stdio.h>
#include<wchar.h>
#include<locale.h>
void funkcia (wchar_t simvol, int dlina, int stroki)
{
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
    wscanf(L"%d", &dlina);
    wprintf("Введите кол-во строк: ");
    wscanf(L"%d", &stroki);
    wprintf("\nРезультат\n");
    funkcia(simvol, dlina, stroki);
    return 0;
}
