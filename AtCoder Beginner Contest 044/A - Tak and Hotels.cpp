/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, X, Y, totalFee = 0;
    cin >> N >> K >> X >> Y;

    if (N > K)
    {
        for (int i = 1; i <= K; i++)
            totalFee += X;

        for (int i = K + 1; i <= N; i++)
            totalFee += Y;
    }
    else
    {
        for (int i = 1; i <= N; i++)
            totalFee += X;
    }

    cout << totalFee << endl;

    return 0;
}
