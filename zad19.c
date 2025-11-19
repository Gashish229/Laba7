#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    float chisel1, chisel2; // Переменные для хранения двух чисел
    wchar_t variant; // Переменная для выбора операции
    int result; // Переменная для проверки корректности ввода
    
    setlocale(LC_ALL, ""); // Локаль для поддержки русского 
    
    while(1)
    {
        wprintf(L"Выберите желаемую операцию:\n");
        wprintf(L"с. сложение    в. вычитание\n");
        wprintf(L"у. умножение    д. деление\n");
        wprintf(L"з. завершение\n");
        
        result = wscanf(L"%lc", &variant);
        if (result != 1) // Проверка корректности ввода
        {
            while(getwchar() != L'\n'); // Очистка буфера прр ошибке
            wprintf(L"!Ошибка ввода!\n\n");
            continue; // Возврат к началу цикла
        }
        while(getwchar() != L'\n'); // Очистка буфера после чтения символа
        
        if (variant == L'з') // Проверка на выход из программы
        {
            wprintf(L"Программа завершена.\n");
            break;
        }
        
        if (variant != L'с' && variant != L'в' && variant != L'у' && variant != L'д') // Проверка корректности выбранной операции
        {
            wprintf(L"Такого варианта нет. Попробуйте снова.\n\n");
            continue;
        }
        
        // Ввод первого числа
        while(1)
        {
            wprintf(L"Введите первое число: ");
            result = wscanf(L"%f", &chisel1);
            if (result == 1)
            {
                while(getwchar() != L'\n'); // Очистка буфера после успешного вввода
                break;
            }
            else
            {
                wchar_t temp[100]; // П
                wscanf(L"%ls", temp);
                wprintf(L"%ls не является числом.\n", temp);
                wprintf(L"Введите число, такое как 2.5, -1.78Е8 или 3: ");
            }
        }
        
        // Ввод второго числа
        while(1)
        {
            wprintf(L"Введите второе число: ");
            result = wscanf(L"%f", &chisel2);
            if (result == 1)
            {
                while(getwchar() != L'\n'); // Очистка буфера после успешного ввода
                
                // Проверка деления на ноль
                if (variant == L'д' && chisel2 == 0.0f)
                {
                    wprintf(L"Введите число, отличное от 0: ");
                    continue;
                }
                break;
            }
            else
            {
                wchar_t temp[100];
                wscanf(L"%ls", temp);
                wprintf(L"%ls не является числом.\n", temp);
                wprintf(L"Введите число, такое как 2.5, -1.78Е8 или 3: ");
            }
        }
        
        // Выполнение операции и вывод результата
        switch(variant)
        {
            case L'с':
                wprintf(L"%.2f + %.2f = %.2f\n", chisel1, chisel2, chisel1 + chisel2);
                break;
            case L'в':
                wprintf(L"%.2f - %.2f = %.2f\n", chisel1, chisel2, chisel1 - chisel2);
                break;
            case L'у':
                wprintf(L"%.2f * %.2f = %.2f\n", chisel1, chisel2, chisel1 * chisel2);
                break;
            case L'д':
                wprintf(L"%.2f / %.2f = %.2f\n", chisel1, chisel2, chisel1 / chisel2);
                break;
        }
        wprintf(L"\n");
    }
    
    return 0;
}
