#include <iostream>
#include <math.h>
#include <string>
#define endl "\n"
#define enld endl


using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
    
    
    
int n,t;
string s;

cin>>n>>t;
cin>>s;
while(t--)
{
        for (int i=0;i+1<n;i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {   s[i]='G';
                s[i+1]='B';
                i++;



            }

        }

}
cout<<s;
}
