#include <stdio.h>

using namespace std;

int main()
{
    
    int n = 7;
    int spc = n;
    int i, j, k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j>=k)
            printf("%d ", i);
            else
            printf(" ");
        }
        k--;
        printf("\n");
    }

    return 0;
}
