#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string p;
    getline(cin,p);
    long n;
    cin>>n;
    cin.ignore(1);
    vector<string > a;
    a.assign(n,string());
    for(long i=0; i<n; i++)
    {
        getline(cin,a[i]);
    }
    bool ok=false;
    for(long i=0; i<n; i++)
        for(long j=i; j<n; j++)
            if((a[i][1]==p[0]&&p[1]==a[j][0])||(p[0]==a[j][1]&&p[1]==a[i][0])||(a[i]==p))
            {
                ok=true;
                break;
            }
   if(ok)
    cout<<"YES";
   else cout<<"NO";
}
