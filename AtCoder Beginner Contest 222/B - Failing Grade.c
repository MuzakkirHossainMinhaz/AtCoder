/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <stdio.h>

int main()
{
    int N, P, cnt = 0;
    scanf("%d%d", &N, &P);

    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d", &a);

        if (a < P)
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
