#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,temp,b,c,d;
    cin >> n;
    cin >> m;
    vector<int> a;
    for(i=0;i<n;i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    d = (*(max_element(a.begin(),a.end())) * n) - (accumulate(a.begin(),a.end(),0));
    if(d>=m)
        b = *(max_element(a.begin(),a.end()));
    else{
        if((m-d)%n != 0)
            b = *(max_element(a.begin(),a.end())) + ((m-d)/n) + 1;
        else
            b = *(max_element(a.begin(),a.end())) + ((m-d)/n);
    }
    c = *(max_element(a.begin(),a.end())) + m;
    cout << b << " " << c;
    return 0;
}
