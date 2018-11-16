#include <iostream>
using namespace std;
int n,m,S;

void process(int u)
{
    if(u>n)
        if(u%2==0)
            {
                u/=2;
                S++;
                process(u);
            }
        else
            {
                u++;
                S++;
                process(u);
            }
    else
        S+=(n-u);
}

int main()
{
    cin>>n>>m;
    process(m);
    cout<<S;
}
