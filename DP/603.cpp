#include <bits/stdc++.h>
using namespace std;
int arr[1000 * 100 + 10];
int main()
{
    string s;
    cin>>s;
    int a , b , n;
    arr[0] = 0;
    for(int i = 1 ; i < (int)s.size() ; i++)
    {
        if(s[i] == s[i - 1])
            arr[i] = 1;
        arr[i] += arr[i - 1];
    }
    cin >> n;
    while(n --)
    {
        cin >> a >> b;
        a --;
        b --;
        cout << arr[b] - arr[a] << endl;
    }
    return 0;
}
