#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swapc(char &a, char &b)
{
    char t;
    t=a;
    a=b;
    b=t;
}
int main()
{
     string s;
    int n, t;
    cin >> n >> t >> s;
    int k,i,j;
    while(t--){
        for(i=0; i<s.length()-1; i++){
            j=i+1;
            if(s[i]=='B' && s[j]=='G'){
                s[i]='G';
                s[j]='B';
                i=j;
            }
        }
    }
    cout << s << endl;
    }
