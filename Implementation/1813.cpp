#include <bits/stdc++.h>
#define vi vector<int>
#define vb vector<bool>
typedef unsigned int ui;
typedef long int li;
typedef unsigned long lu;
typedef long long ll;
typedef unsigned long long llu;
using namespace std;
void scanf(int &n)
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


    int n{}, a{}, sum1{}, sum2{}, sum3{};
    scanf(n);
    while(n--)
    {
        scanf(a);
        sum1 += a;
        scanf(a);
        sum2 += a;
        scanf(a);
        sum3 += a;
    }
    if(sum1!=0 || sum2!=0 || sum3!=0)
        cout<< "NO";
    else
        cout<< "YES";
    cout<< endl;


///   ///   ///   ///   ///   ///   ///
return 0;
}
