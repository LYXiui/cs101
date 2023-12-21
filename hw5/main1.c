#include <stdio.h>

using namespace std;

int main()
{
    
    int n = 7;
    int spc = n;
    for (int i = 1; i <= n; i++) 
    {
    for (int j = spc; j > 1; j--) 
    {
        printf(" ");
    }
    for (int j = 1; j <= i; j++) 
    {
        printf("%d ", i);
    }
    spc--;
    printf("\n");
}

    return 0;
}
