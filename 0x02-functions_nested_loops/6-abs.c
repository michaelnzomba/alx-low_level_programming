#include <stdio.h>

int _abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

int main()
{
    int x = -10;
    printf("%d\n", _abs(x));
    return 0;
}
