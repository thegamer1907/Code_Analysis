#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    string s1[n],s2[m];
    for(int i=0;i<n;i++)
        cin>>s1[i];
    for(int i=0;i<m;i++)
        cin>>s2[i];
    if(n > m ) {cout << "YES";}
    else if ( n < m) { cout << "NO"; }
    else
    {
            int com=0;
            set <string> pb,eb;
            for(int i=0;i<n;i++)
                pb.insert(s1[i]);
            for(int i=0;i<m;i++)
                if(pb.find(s2[i])!=pb.end())
                    com++;
            if(com%2==0) cout << "NO";
            else cout << "YES";
    }
    return 0;
}
