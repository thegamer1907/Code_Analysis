#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int limite=500;

void extraer(set<int> &s1,set<int> &s2)
{
  for (set<int>::iterator it=s1.begin();it!=s1.end();it++)
    s2.insert(*it);
}

void extraer(set<int> s1[11],set<int> s2[11],set<int> s3[11])
{
  for (int i=1;i<11;i++) {
    extraer(s1[i],s3[i]);
    extraer(s2[i],s3[i]);
  }
}

void extraer(string &s,int len,set<int> &conj)
{
  if (int(s.size())<len) return;
  int p=1;
  for (int i=0;i<len;i++) p*=10;
  int val=0;
  for (int i=0;i<int(s.size());i++) {
    val=(10*val+s[i]-'0')%p;
    if (i>=len-1) conj.insert(val);
  }
}

void extraer(string &s,set<int> v[11])
{
  for (int i=1;i<11;i++)
    extraer(s,i,v[i]);
}

void extraer(string &le1,string &ri1,set<int> s1[10],string &le2,string &ri2,set<int> s2[10],
	     string &le3,string &ri3,set<int> s3[10])
{
  le3=le1+le2;
  if (int(le3.size())>10) le3=le3.substr(0,10);
  ri3=ri1+ri2;
  if (int(ri3.size())>10) ri3=ri3.substr(int(ri3.size())-10);
  extraer(s1,s2,s3);
  string med=ri1+le2;
  extraer(med,s3);
}

int n;
string le[limite];
string ri[limite];
set<int> s[limite][11];

int main()
{
  cin>>n;
  for (int i=1;i<=n;i++) {
    cin>>le[i];
    ri[i]=le[i];
    extraer(le[i],s[i]);
    if (int(le[i].size())>10) le[i]=le[i].substr(0,10);
    if (int(ri[i].size())>10) ri[i]=ri[i].substr(int(ri[i].size())-10);
  }
  int casos;
  cin>>casos;
  for (int cas=1;cas<=casos;cas++) {
    int i1,i2;
    cin>>i1>>i2;
    int i=n+cas;
    extraer(le[i1],ri[i1],s[i1],le[i2],ri[i2],s[i2],le[i],ri[i],s[i]);
    int k=0;
    while (k<10 and int(s[i][k+1].size())==1<<(k+1)) k++;
    cout<<k<<endl;
  }
}
