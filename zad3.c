#include<stdio.h>
#include<wctype.h>
#include<wchar.h>
int main(void)
{
    int count_propis = 0;
    int count_stroch = 0;
    int count_ost = 0;
    wint_t ch;
    wprintf("Введите текст(Ctrl+D для завершения):\n");
    while ((ch = getwchar()) != WEOF)
    {
        if (iswupper(ch))
        {
            count_propis++;
        }
        else if (iswlower(ch))
        {
            count_stroch++;
        }
        else
        {
            count_ost++;
        }
    }
    wprintf("Кол-во прописных букв = %d\n", count_propis);
    wprintf("Кол-во строчных букв = %d\n", count_stroch);
    wprintf("Кол-во остальных символов = %d\n", count_ost);
    return 0;
}
