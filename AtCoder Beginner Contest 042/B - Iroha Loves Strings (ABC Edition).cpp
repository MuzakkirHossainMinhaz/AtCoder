/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    string str[n];
    for (int i = 0; i < n; i++)
        cin >> str[i];

    sort(str, str + n);

    for (int i = 0; i < n; i++)
        cout << str[i];

    cout << endl;

    return 0;
}
