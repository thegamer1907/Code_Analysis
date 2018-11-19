#include<bits/stdc++.h>
using namespace std;
long long int const mod=1000000007;
int main()
 {int i;
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    bool first=false,second=false;
char word[3],temp[3];
cin>>word;
cin>>n;
while(n--)

{
cin>>temp;
if(word[0]==temp[0]&&word[1]==temp[1])
    {first=true;
    second=true;}
 if(word[0]==temp[1])
first=true;
if(word[1]==temp[0])
second=true;

}
 if(first&&second)
    cout<<"YES";
 else
    cout<<"NO";


}



