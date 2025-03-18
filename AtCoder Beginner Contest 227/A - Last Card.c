/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int n, k, a;
    scanf("%d%d%d", &n, &k, &a);

    int result = a - 1;
    for (int i = 0; i < k; i++)
    {
        if (result >= n)
            result = 1;
        else
            result++;
    }

    printf("%d\n", result);

    return 0;
}
