#include <bits/stdc++.h>
using namespace std;
long long neededB,neededS,neededC;
int main()
{
    string s;
    long long nb,ns,nc,pb,ps,pc;
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc;
    long long r;
    cin >> r;
    for(int i = 0;i < s.length();i++)
    {
        if(s[i] == 'B')
            neededB++;
        else if(s[i] == 'S')
            neededS++;
        else
            neededC++;
    }
    long long lo = 0;
    long long hi = 1e13;
    long long best = 0;
    while(lo < hi)
    {
        long long mid = (lo + hi)/2;
        long long NeedB = max((long long)0,(neededB*mid) - nb);
        long long NeedS = max((long long)0,(neededS*mid) - ns);
        long long NeedC = max((long long)0,(neededC*mid) - nc);
        if(NeedB*pb + NeedS*ps + NeedC*pc <= r)
            lo = mid+1;
        else
            hi = mid;

        //cout << lo << " " << hi << endl;
    }
    cout << lo-1;
    return 0;
}