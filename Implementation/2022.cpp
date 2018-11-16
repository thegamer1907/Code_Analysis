#include<iostream>
using namespace std;
int sx=0,sy=0,sz=0;
class forces
{
public:
  int x,y,z;
};
int check(forces f)
{

  {
    sx+=f.x;
    sy+=f.y;
    sz+=f.z;

  }
}
int main()
{
  int n,i=0,s;
  cin>>n;
  s=n;
  forces f[100];
  while(n>0)
  {
    cin>>f[i].x>>f[i].y>>f[i].z;
    i++;
    n--;

  }
  i=0;
  while(s>0)
  {
    check(f[i]);
    i++;
    s--;
  }
  
  if(sx==0&&sy==0&&sz==0)
  {
    cout<<"YES";

  }
  else
  cout<<"NO";
  return 0;

}
