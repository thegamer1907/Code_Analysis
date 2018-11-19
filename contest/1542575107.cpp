
#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
    int n = 0 , c = 0, m;
    while (!isdigit(c)) m = c - 45 ? 1 : -1 , c = getchar();
    while (isdigit(c))  n = n * 10 + c - 48 , c = getchar();
    return m * n;
}
const int N = 1e6 + 1;

main()
{

    string s,s1;
    cin >> s;

    int n = read();
    int t=0, t1=0;
    for(int i=1;i<=n;i++){
    cin >> s1;
    if(s==s1){
        cout<< "YES";
        return 0;
    }
    if(s[0]==s1[1])
        t++;
    if(s[1]==s1[0])
        t1++;
    if(t>0 && t1>0){
        cout<< "YES";
        return 0;
    }


    }
    cout<< "NO";

}
