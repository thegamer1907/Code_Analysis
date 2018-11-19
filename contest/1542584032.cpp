#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> kek;
map<string,int> kol;

int main()
{
    int n,k;
    cin >> n >> k;
    kek.resize(n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<k;j++)
        {
            char c;
            cin >> c;
            kek[i]+=c;
        }
        while(kek[i].length()<4){kek[i]+='0';}
        kol[kek[i]]++;
    }
    for (auto &x:kek)
    {
        for (char c0='0';c0<='1'-(x[0]-'0');c0++)
        for (char c1='0';c1<='1'-(x[1]-'0');c1++)
        for (char c2='0';c2<='1'-(x[2]-'0');c2++)
        for (char c3='0';c3<='1'-(x[3]-'0');c3++)
        {
            string y="";
            y+=c0;
            y+=c1;
            y+=c2;
            y+=c3;
            //cout << x << ' ' << y << endl;
            if (kol.find(y)!=kol.end())
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}
