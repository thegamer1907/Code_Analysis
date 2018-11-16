#include<iostream>
using namespace std;

string s;
int n,t,i,j;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> t;
    cin >> s;

    for (i = 1; i <= t; i++)
    {
        for (j = 0; j < s.size() - 1; j++)
        if (s[j] == 'B' && s[j + 1] == 'G')
        {
            swap(s[j + 1],s[j]);
            j++;
        }
    }

    cout << s;
}
