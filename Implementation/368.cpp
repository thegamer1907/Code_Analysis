#include <bits/stdc++.h>
#define vi vector<int>
#define vb vector<bool>
typedef unsigned int ui;
typedef long int li;
typedef unsigned long lu;
typedef long long ll;
typedef unsigned long long llu;
using namespace std;
void scanf(ui &n)
{
    bool negative = false;
    char c;
    n = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        n = n*10 + c - 48;
    if (negative)
        n *= -1;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
///   ///   ///   ///   ///   ///   ///


    ui n{}, k{}, a{}, x{}, m{};
    vector <ui> num(105, 0);
    scanf(n), scanf(k);
    bool fs{true};
    for(ui i=1; i<=n; i++)
    {
        scanf(a);
        if(fs)
        {
            m = a;
            fs = false;
        }
        num.at(a)++;
        if(i==k)
            x = a;
    }
    if(num.at(0) == n)
        cout<< "0"<< endl;
    else
    {
        a = 0;
        for(ui i=x; i<=m; i++)
        {
            if(i!=0)
                a += num.at(i);
        }
        cout<< a<< endl;
    }


///   ///   ///   ///   ///   ///   ///
return 0;
}
