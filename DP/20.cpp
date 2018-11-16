#include<bits/stdc++.h>
using namespace std;
int main()
{
int b,g,p=0;
    cin>>b;
    int boy[b];
    for(int i=0;i<b;i++) cin>>boy[i];
    sort(boy,boy+b);
    cin>>g;
    int girl[g];
    for(int i=0;i<g;i++) cin>>girl[i];
    sort(girl,girl+g);
    for(int i=0,j=0;i<b && j<g;)
    {
        if(boy[i]==girl[j] || boy[i]+1==girl[j] || boy[i]==girl[j]+1)
        {
            p++;
            i++;
            j++;
        }
        else if(boy[i]<girl[j]) i++;
        else j++;
    }
    cout<<p<<endl;
    return 0;
}
