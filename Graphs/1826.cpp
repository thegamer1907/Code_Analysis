#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,g;
    cin>>b;
    int boy[b];
    for(int i=0;i<b;i++)
        cin>>boy[i];
    cin>>g;
    int girl[g];
    for(int i=0;i<g;i++)
        cin>>girl[i];
    sort(boy,boy+b);
    sort(girl,girl+g);
    int cnt=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<g;j++)
        {
            if(abs(boy[i]-girl[j])<=1)
            {
                cnt++;
                girl[j]=-10000000;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}
