#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int values[100010][6];
bool present[100010];
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n,k;
    for(int i=0;i<100010;i++)
    {
        present[i]=false;
        values[i][0]=values[i][1]=values[i][2]=values[i][3]=0;
    }
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int net=0;
        for(int j=0;j<k;j++)
        {
            int c;
            cin>>c;
            if(c==1)
            net+=(1<<j);
        }
        if(net==0){
        cout<<"YES";
        return 0;
        }
        present[net]=true;
    }
    bool poss=false;
    for(int i=1;i<(1<<k);i++)
    {
        for(int j=1;j<(1<<k);j++)
        {
            if(((i&j)==0)&&present[i]==true&&present[j]==true)
            {
                //cout<<i<<" "<<j<<endl;
                poss=true;
            }
        }
        //cout<<endl;
    }
    if(poss==true)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}