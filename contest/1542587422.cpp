#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

vector<pair<int,int> > v;

void morir()
{
  cout<<"YES"<<endl;
  exit(0);
}

void arregla(int &h)
{
  if (h==12) h=0;
}

int main()
{
  int h,m,s,t1,t2;
  cin>>h>>m>>s>>t1>>t2;
  arregla(h);
  arregla(t1);
  arregla(t2);
  v.push_back(pair<int,int> (h*60*60+m*60+s,0));
  v.push_back(pair<int,int> (12*(m*60+s),0));
  v.push_back(pair<int,int> (12*60*s,0));
  v.push_back(pair<int,int> (t1*60*60,1));
  v.push_back(pair<int,int> (t2*60*60,1));
  sort(v.begin(),v.end());
  if (v[0].second==1 and v.back().second==1) morir();
  for (int i=0;i<int(v.size())-1;i++)
    if (v[i].second==1 and v[i+1].second==1)
      morir();
  cout<<"NO"<<endl;
}
