#include<iostream>
using namespace std;
int main()
{
    int n,t,i,j,l;
    cin >> n >> t;
    char s[n];
    cin >> s;
   for(l=1;l<=t;l++)
   {
        for(i=0;i<n; )
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                j=s[i];
                s[i]=s[i+1];
                s[i+1]=j;
                i+=2;
            }
            else i++;
        }
    }
    cout <<s<<endl;

    return 0;
}