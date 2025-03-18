/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int s, t, x;
    scanf("%d%d%d", &s, &t, &x);

    if (s < t)
    {
        if (s <= x && x < t)
            printf("Yes\n");
        else
            printf("No\n");
    }
    else
    {
        if (t <= x && x < s)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}
