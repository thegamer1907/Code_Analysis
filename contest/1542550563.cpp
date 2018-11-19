# include <iostream>
# include <cstring>
# include <string>
using namespace std;
int main ()
{
    int n,p1=0,p2=0;
    char s[4],p[4];
    cin >> s >> n;
    for(int i = 0;i<n;++i)
    {
        cin >> p;
        if(s[0]==p[1]) p1 = 1;
        if(s[1]==p[0]) p2 = 1;
        if(s[0]==p[0] && s[1]==p[1]) p1 = p2 =1;
    }
    if(p1 && p2)cout << "YES" << endl;
    else cout << "NO" <<endl;
    return 0;
}
