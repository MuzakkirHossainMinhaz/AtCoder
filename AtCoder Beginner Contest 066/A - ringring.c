/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>
int main()
{
    int a, b, c, sum1, sum2, sum3;
    scanf("%d %d %d", &a, &b, &c);

    sum1 = a + b;
    sum2 = a + c;
    sum3 = b + c;

    if (sum1 < sum2 && sum1 < sum3)
        printf("%d\n", sum1);
    else if (sum2 < sum1 && sum2 < sum3)
        printf("%d\n", sum2);
    else
        printf("%d\n", sum3);

    return 0;
}
