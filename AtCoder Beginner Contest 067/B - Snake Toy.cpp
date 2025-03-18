/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a, a + N);

    int sum = 0;
    for (int i = N - K; i < N; i++)
        sum += a[i];

    cout << sum << endl;

    return 0;
}
