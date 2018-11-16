#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    int temp;
    while(t--)
    {
        for(int i=1;i<n;)
        {
            if(s[i-1]=='B' && s[i]=='G')
            {
                temp=s[i];
                s[i]=s[i-1];
                s[i-1]=temp;
                i+=2;
            }
            else
                i++;
        }
    }
    cout << s << endl;
return 0;    
}