#include <stdio.h>
int main()
{
    char ch[] = "minhaj";
    int i = 0;
    while (ch[i] != '\0')
    {

        printf("%c", ch[i]);
        i++;
    }
    printf("%d", i);
}