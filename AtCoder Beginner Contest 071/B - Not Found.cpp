/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int a[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 'a';
        a[x]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            printf("%c\n", 'a' + i);
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}
