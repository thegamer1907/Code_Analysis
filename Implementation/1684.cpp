#include<bits/stdc++.h>
using namespace std;
int main()
{ int counter=1,i;
  string b;
  cin >>b;
  for(i=0;i<b.size()-1;i++)
  {
    if(b[i]==b[i+1])
        counter++;
    else
        counter=1;
    if(counter==7)
    {
        cout <<"YES"<<endl;
        break;
    }
  }
 if(counter!=7)
    cout<<"NO"<<endl;
}
