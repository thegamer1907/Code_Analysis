
/*|_______________________Indrojit Mondal______________________|
|                                                              |
|            Department of Computer Science and Engineering    |
|                        Session :  2014-15                    |
|                        Roll    :  14CSE036                   |
|                      University Of Barisal                   |
|______________________________________________________________|
|  Silent_No2........ Silent_No2.....Silent_No2......Silent_No2|
|                                                              |
|  I Code For Getting Love.....   God is Almighty......        |
|  Its high time to woke up......  Forget Past.....            |
|______________________________________________________________|*/

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
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FAST ios_base::sync_with_stdio(0);   cout.tie(0);
#define LLMax LLONG_MAX
#define IMax INT_MAX
#define IMin INT_MIN
#define LLMin LLONG_MIN
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b)  (a*b)/GCD(a,b)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define vclr(V) V.clear()
#define CLR(A) memset(A,0, sizeof A)
#define Binary_Search(V,Value) binary_search(V.begin(),V.end(),Value); /// If finds value , return 1 otherwise return 0
#define Auto(ArrayOrStringOrVector)  for( auto I: ArrayOrStringOrVector)
#define ForD(E,S) for(ll I=E; I>=S; I-=1)
#define sz(S)  S.size()
#define MaxE(A) *max_element(A, A + sizeof(A)/sizeof(A[0]))  /// 0 based and A[N] exactly declared
#define MaxI(A) distance(A, max_element(A, A + sizeof(A)/sizeof(A[0]))) /// 0 based and A[N] exactly  declared
#define MinE(A) *min_element(A, A + sizeof(A)/sizeof(A[0])) /// 0 based and A[N] exactly  declared
#define MinI(A) distance(A, min_element(A, A + sizeof(A)/sizeof(A[0]))) /// 0 based and A[N] exactly  declared
bool Compare(const pair<int,int> &a,const pair<int, int> &b)
{
    return a.first< b. first ;
}

const int INF = 0x3f3f3f3f;
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


int main()
{
   string s;
   cin>>s;
   int i,l;
   l=s.size(); int loc1=0,loc2=0;
   for(i=0; i<l; i++)
   {
       if(s[i]=='A' && s[i+1]=='B')
       {
           loc1=i+1;
           break;
       }
   }
   for(i=loc1+1; i<l; i++)
   {
       if(s[i]=='B' && s[i+1]=='A')
       {
           loc2=i+1;
           break;
       }
   }
   if(loc1>0 && loc2>0) cout<<"YES"<<endl;
   else{
    loc1=0; loc2=0;
     for(i=0; i<l; i++)
      {
         if(s[i]=='B' && s[i+1]=='A')
         {
           loc1=i+1;
           break;
         }
      }
   for(i=loc1+1; i<l; i++)
   {
       if(s[i]=='A' && s[i+1]=='B')
       {
           loc2=i+1;
           break;
       }
   }
   if(loc1>0 && loc2>0) cout<<"YES"<<endl;
   else{
    cout<<"NO"<<endl;
   }

   }

   return 0;
}

/*God is Almighty.....*/
