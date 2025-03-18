/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f, x;
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &x);

    int tk = x, ak = x, cnt1 = 0, cnt2 = 0;
    while (tk)
    {
        if (a + c <= tk)
        {
            cnt1 += a;
            tk -= a + c;
        }
        else
        {
            if (a > tk)
                cnt1 += tk;
            else
                cnt1 += a;
            tk = 0;
        }
    }
    while (ak)
    {
        if (d + f <= ak)
        {
            cnt2 += d;
            ak -= d + f;
        }
        else
        {
            if (d > ak)
                cnt2 += ak;
            else
                cnt2 += d;

            ak = 0;
        }
    }

    if (cnt1 * b > cnt2 * e)
        printf("Takahashi\n");
    else if (cnt1 * b < cnt2 * e)
        printf("Aoki\n");
    else
        printf("Draw\n");

    return 0;
}
