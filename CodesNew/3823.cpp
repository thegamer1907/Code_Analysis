#include<bits/stdc++.h>
using namespace std;

class Mafia
{
    private:
    long long rounds=0,n,small=0,sum=0;
    public:
    Mafia(long long  K)
    {
        n=K;
    }
    int calculate()
    {
        for(long long i=0;i<n;i++)
        {
            long long t;
            cin>>t;
            sum+=t;
            small=max(small,t);
        }
        rounds=sum/(n-1); 
        if(sum%(n-1)>0)
        rounds++;
        if(rounds<small)
        rounds=small;
        return rounds;
     }
};

int main()
{
    long long K;
    cin>>K;
    Mafia obj(K);
    long long s=obj.calculate();
    cout<<s;
    return 0;
}