#include<bits/stdc++.h>

using namespace std;

int main()
{
    //ifstream cin("input.txt");
    //ofstream cout("output.txt");

    int n;
    string s;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> n >> a >> b;

    int st = 0;
    int clon = n;

    while(clon % 2 == 0)
    {
        st++;
        clon/=2;
    }

    //cout << st << "\n";

    bool fin = 1;
    while(1)
    {
        int m = n / 2;

        bool pok1 = 0;
        bool pok2 = 0;
        if(a <= m) pok1 = 0; else pok1 = 1;
        if(b <= m) pok2 = 0; else pok2 = 1;
        if(pok1 != pok2) {

        if(fin) {cout << "Final!"; return 0;}
        cout << st; return 0;}

        fin = 0;
        st--;

        if(a > m) a-=m;
        if(b > m) b-=m;
        n/=2;

    }




}
