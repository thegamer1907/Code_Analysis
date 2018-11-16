#include <iostream>
using namespace std;
int main()
{
    int n,t,i,j;
    string s;
    cin >> n;
    cin >> t;
    cin >> s;
    for(j=0;j<t;j++)
    {
    for(i=0;i<n;i++)
    {
        if(s[i]<s[i+1]){
           swap(s[i],s[i+1]);
        i++;}
    }
    }
    cout << s;

}
