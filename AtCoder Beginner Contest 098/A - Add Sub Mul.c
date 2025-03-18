/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int a, b, add, sub, mul;
    scanf("%d%d", &a, &b);

    add = a + b;
    sub = a - b;
    mul = a * b;

    int max = add;
    if (sub > max)
        max = sub;
    if (mul > max)
        max = mul;

    printf("%d\n", max);

    return 0;
}
