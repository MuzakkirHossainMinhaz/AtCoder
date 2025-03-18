/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int abc, a, b, c, bca, cab;
    scanf("%d", &abc);
    int temp = abc;

    c = temp % 10;
    temp /= 10;
    b = temp % 10;
    temp /= 10;
    a = temp;

    bca = b * 100 + c * 10 + a;
    cab = c * 100 + a * 10 + b;

    printf("%d\n", abc + bca + cab);
    return 0;
}
