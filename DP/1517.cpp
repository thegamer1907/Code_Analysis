
/*
                                                                     Hello World
GOD BLESS ME                                                                                                                                   GOD BLESS ME
*/
#include<iostream>
#include<string>
#include <sstream>
#include<vector>
#include<math.h>
#include<map>
#include<set>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<stack>
using namespace std;
typedef long long int ll;

/***Template Start***/
#define FAST ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define LLMax LLONG_MAX
#define IMax INT_MAX
#define IMin INT_MIN
#define LLMin LLONG_MIN
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b)  (a*b)/GCD(a,b)
bool Compare(const pair<int,int> &a,const pair<int, int> &b)
{
    return a.first> b. first ;
}
string tostring(ll Number)
{

string String;
ostringstream Convert;
Convert <<Number;
String = Convert.str();
return String;
}

ll toint(string String)
{
    stringstream Convert(String);
    ll Number=0;
    Convert>> Number;
   return Number;
}
/*
  stack<int>S;
  S.push(1);
  for(auto I : S)
  {
      S.pop();
  }

  */

#define Binary_Search(V,Value) binary_search(V.begin(),V.end(),Value); /// If finds value , return 1 otherwise return 0
/**Template End***/
int main()
{
    int N;
    cin>>N;
    int A[N+1];
    int Max=0;
    for(int I=1; I<=N; I++)
    {
        cin>>A[I];
    }
    int Ct1,Ct2,Ct3,Tot;
    if(N==1)
    {
        if(A[1]==0)
        cout<< 1<<endl;
        else
            cout<< 0 <<endl;
        return 0;
    }

    int Ck=count(A+1,A+N+1,0);
    if(Ck==N)
    {
        cout<<N<<endl;
        return 0;
    }

    for(int I=1; I<=N; I++)
    {

        Ct1=count(A+1,A+I+1,1);
        //cout<<Ct1<<" ";
        for(int J=I+1; J<=N; J++)
        {

            Ct2=count(A+I+1,A+J+1,0);
            //cout<<Ct2<<endl;

            Ct3=count(A+J+1,A+N+1,1);
            Tot = Ct1+Ct2+Ct3;
            Max=max(Max, Tot);

        }
    }

    cout<<Max<<endl;
    return 0;
}

/*God is Almighty */
