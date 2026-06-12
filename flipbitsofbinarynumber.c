#include <stdio.h>
int flipBits(int n)
{
    int mask=0;
    int temp=n;
    while(temp)
    {
        mask=(mask<<1)|1;
        temp >>= 1;
    }
    return n^mask;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Flipped Number= %d\n", flipBits(n));
    return 0;
}
