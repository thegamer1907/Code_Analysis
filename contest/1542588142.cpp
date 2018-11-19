    #include <bits/stdc++.h>
    using namespace std;
    #define clr(i, j)     memset(i, j, sizeof(i))
    typedef long long     ll;
    typedef long double   ld;
    int main()
    {
        string s;
        cin >>s;
        int n;
        cin >> n;
        string a[n];
        int f = 0;
        string ans = "";
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                string x =  "";
                x = x+a[j][1] + a[i][0];
                if(x == s || a[j] == s || a[i] == s)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
        cout << "NO" << endl;
}

