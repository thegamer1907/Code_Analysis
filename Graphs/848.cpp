#include<iostream>
#include<string>
 using namespace std;
 int main()
 {int n,t,i=1;
 cin>>n>>t;
 string s,x;
 cin>>s;
 x=s;
 while(t--)
 {while (i<s.size())
 {if(s[i]==71&&s[i-1]==66)
   swap(x[i],x[i-1]);
   i++;
 }
 s=x;
 i=1;
 }

 cout<<s;
 return 0;
}
