#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
#define vll std::vector<ll> 
#define pb push_back
#define ptr trie*
using namespace std;
#define tam 500067
vector<string> txt(tam);
int n;

bool f(int pos)
{
  bool res=true;
  for (int i = pos+1; i <n ; ++i)
  {
    if (txt[i][1]<txt[i-1][1])
      res=false;
  }
  return res;
}
int bs()
{
  int iz=0,der=n,mid;
  while(iz+1<der)
  {
    mid=(iz+der)/2;
    if (f(mid)==1)
      der=mid;
    else
      iz=mid;
  }
  if (f(der-1)==1)
    return der-1;
  else
    return der;
}
struct trie{

  map<char,ptr> soymp;
  int fin;
  ll tot;
  trie(){}
};
trie NUL,inicio;
void init(){
  NUL.tot=0;
  NUL.fin=0;
  inicio=NUL;
}
trie nodos[tam];int contador=0;
ptr getnode()
{
  nodos[contador]=NUL;
  return &nodos[contador++];
}
void insertar(ptr padre,int pos,int index)
{
   if(padre==&NUL)
   {
    cout<<"error\n";
    return;
   }
   //cout<<(*padre).tot<<" "<<txt[pos][index]<<" "<<(*padre).fin<<endl;
  if (txt[pos].size()<=index)
    return;
    map<char,ptr>::iterator ite=(*padre).soymp.upper_bound (txt[pos][index]);
    bool exist=false;
    for(;ite!=(*padre).soymp.end();ite++)
    {
      if (ite->second==&NUL)
        continue;
      exist=true;
    }
    if (exist==true)
    { 
      //cout<<"Existe"<<endl;
      for(ite=(*padre).soymp.begin();ite!=(*padre).soymp.end();ite++)
        {
          if (ite->second==&NUL)
            continue;
          //cout<<"elimino "<<ite->first<<endl;
          (*padre).fin+=(*ite->second).tot;
          ite->second=&NUL;
        }
      }
    (*padre).tot++;
    if ((*padre).soymp.find(txt[pos][index])==(*padre).soymp.end())
    {
      //cout<<"NUEVO"<<endl;
      (*padre).soymp[txt[pos][index]]=getnode();
    }
    else
    {
      if ((*padre).soymp[txt[pos][index]]==&NUL) 
        (*padre).soymp[txt[pos][index]]=getnode();
    }
    ptr hijo=(*padre).soymp[txt[pos][index]];
    if (txt[pos].size()-1==index)
    {
      (*hijo).tot++;
      (*hijo).fin++;
       for(map<char,ptr>::iterator ite2=(*hijo).soymp.begin();ite2!=(*hijo).soymp.end();ite2++)
       {
        if (ite2->second==&NUL )
          continue; 
          (*hijo).fin+=(*ite2->second).tot;
         //cout<<"elimino "<<ite2->first<<" porser ultimo\n";
          ite2->second=&NUL;
       } 
      
    }
   // cout<<(*padre).tot<<" "<<txt[pos][index]<<" "<<(*padre).fin<<endl;
    //cout<<endl;
    insertar(hijo,pos,index+1);
}
// rehacer como padre e hijo

void print(ptr nodo)
{

  if ((*nodo).tot==0)
      {
        if (inicio.tot==0)
          exit(0);
        return;
      }
  if ((nodo)==&inicio)
  {
    cout<<"#";
  }

  if ((*nodo).fin>0)
  {
    (*nodo).tot--; 
    (*nodo).fin--; 
    cout<<endl;
    print (&inicio);
    return;
  }
  for(map<char,ptr>::iterator ite=(*nodo).soymp.begin();ite!=(*nodo).soymp.end();ite++)
  {
    if (ite->second!=&NUL&& (*ite->second).tot>0)
    {
      cout<<ite->first;
      (*nodo).tot--;
      print((ite->second));
      return;
    }
  }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0); 
  cin>>n;
  int pos;
  for (int i = 0; i < n; ++i)
  {
    cin>>txt[i];
  }
  pos=bs();
  init();
  for (int i = 0; i < pos; ++i)
  {
    cout<<"#\n";
  }
  for (int i = pos; i < n; ++i)
  {
    //cout<<txt[i]<<endl;
    insertar(&inicio,i,1);
    //cout<<endl;
  }

  //cout<<endl;
  print(&inicio);

  //cout<<pos<<endl;

}
