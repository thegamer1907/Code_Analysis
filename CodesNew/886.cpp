#include<bits/stdc++.h>

using namespace std;
void func(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}
int main()
{
    //func();
    int n,m;
    vector<string>P,E;
    string temp;
    cin >>n>>m;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        P.push_back(temp);
    }
    for(int i=0; i<m; i++)
    {
        cin >> temp;
        E.push_back(temp);
    }
    if(n>m)
    {
        cout <<"YES" <<endl;
        return 0;
    }
    else if(n<m){
        cout <<"NO" <<endl;
        return 0;
    }
    else{
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(P[i]==E[j])
                    count++;
            }
        }

        if(count%2 == 0) cout<< "NO" <<endl;
        else cout<< "YES" <<endl;
    }
}
