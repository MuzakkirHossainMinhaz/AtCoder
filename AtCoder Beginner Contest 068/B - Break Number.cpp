/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N] = {0};

    for (int i = 0; i < N; i++)
    {
        int temp = i + 1;
        while (temp % 2 == 0)
        {
            a[i]++;
            temp /= 2;
        }
    }

    int maxValue = a[0], maxValueIndex = 0;
    for (int i = 1; i < N; i++)
    {
        if (maxValue < a[i])
        {
            maxValue = a[i];
            maxValueIndex = i;
        }
    }

    cout << maxValueIndex + 1 << endl;

    return 0;
}
