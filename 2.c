#include<stdio.h>
int main(void)
{
    int count = 0;
    int ch;
    printf("Введите текст: \n");
    while ((ch = getchar()) != EOF)
    {
        if (ch < ' ')
        {
            switch (ch)
            {
                case '\n':
                    printf("\\n - %d", ch);
                    break;
                case '\t':
                    printf("\\t - %d", ch);
                    break;
                default:
                    printf("^%c - %d", ch + 64, ch);
                    break;
            }
        }
        else
        {
            printf("%c - %d", ch, ch);
        }
        count++;
        if (ch == '\n' || count % 10 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("\t");
        }
    }
    return 0;
}
