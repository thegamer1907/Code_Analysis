#include <bits/stdc++.h>
using namespace std;
bool ck, ck1;
string str, ss;
int n;
int main()
{
    cin>>str;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ss;
        if(ss[1] == str[0]) ck = true;
        if(ss[0] == str[1]) ck1 = true;
        if(ss==str || (ck && ck1)) return puts("YES"), 0;
    }
    puts("NO");
    return 0;
}
