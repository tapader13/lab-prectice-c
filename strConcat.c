#include <stdio.h>
#include <string.h>
int main()
{
    char ch[] = "mim";
    char ch1[6];
    strcpy(ch1, ch);
    int len = strlen(ch);
    for (int i = 0; i < len / 2; i++)
    {
        int temp = ch[i];
        ch[i] = ch[len - i - 1];
        ch[len - i - 1] = temp;
    }
    int d = strcmp(ch, ch1);
    printf("%d", d);
    // printf("%s", ch);
}