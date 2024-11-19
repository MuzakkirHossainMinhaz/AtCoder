/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, totalCandies = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
        totalCandies += i;

    cout << totalCandies << endl;

    return 0;
}
