#include <stdio.h>

int main()
{
    int phy, che, math;
    scanf("%d%d%d", &phy, &che, &math);
    int ave = (phy + che + math) / 3;
    if (ave < 40 || phy < 33 || che < 33 || math < 33)
    {
        printf("Your ave. ia %d but you are fail\n", ave);
    }
    else
    {
        printf("Your ave. is %d and you are passed", ave);
    }
}