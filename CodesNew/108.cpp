#include<bits/stdc++.h>

using namespace std;
int main()
{
    int l,n;
    cin>>n>>l;
    set <double> s;
    double d,a;
    for(int i=0;i<n;i++){
        cin>>a;
        s.insert(a);
    }
    d=*s.begin()-0.0;
    set< double >::const_iterator y=s.begin();
    for(set< double >::const_iterator x = s.begin();x!=s.end();x++){
        if(((*x-*y)/2)>d)
            d=(*x-*y)/2;
        y=x;
    }

    if(l-*s.rbegin()>d)
        d=l-*(s.rbegin());
    printf("%f",d);
}
