//Jai Shree Krishna
#include <bits/stdc++.h>
#define ll long long int
using namespace  std;

//One More Time
//Just Do it Dude
map<char, int >m1;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("a.in", "r", stdin)
    char a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    vector<string>v1;
    for (int i  =0 ; i<n; i+=1) {
        string s;
        cin>>s;
        v1.push_back(s);
    }
    bool ans = false;
    for (int i = 0 ; i<n; i+=1) {
        for (int j = 0 ; j<n; j+=1) {
            string cool = v1[i]+v1[j];
            //cout<<cool<<endl;
            for (int k = 0 ; k<cool.length()-1; k+=1) {
                if(cool[k]==a and cool[k+1]==b)
                {
                    ans =true;
                }
            }
        }
    }
    
    if(ans)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    
    
    
    
    
    return 0;
}

