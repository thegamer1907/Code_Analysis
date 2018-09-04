#include<iostream>
using namespace std;
typedef long long int LLL;
LLL n;
bool enough(LLL x)
{

    LLL nn, score = 0;
    nn = n;
    while(nn)
    {
        score += min(nn, x);
        nn -= min(nn, x);
        nn -= (nn/10);
    }
    return (score * 2 >= n);
}
int main()
{
    cin >> n;
    LLL s = 1, e = n;
    while(s!= e)
    {
        LLL m = (s+e)/2;
        if(enough(m))
        {
            e = m;
        }
        else
        {
            s = m+1;
        }
    }
    cout << s << endl;
}
