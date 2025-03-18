/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int H, W, h, w;
    scanf("%d%d%d%d", &H, &W, &h, &w);

    printf("%d\n", abs(H - h) * abs(W - w));

    return 0;
}
