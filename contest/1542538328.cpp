#include <iostream>
#include <vector>

using namespace std;
const long long int INF=1000000000000000;
int tablica[100002];
long long int DP[100002][21];
void funkcja(int a,int b, int lewy, int prawy, int level,int nowa [], long long int wart)
{

    int mid=(a+b)/2;
    int ktory;
    long long int aktual=wart;
   long long int best;
    vector<int> pierwszy,drugi;
   // cout<<nowa[3]<<endl;
    for(int i=lewy; i<=min(prawy,mid); i++)
    {

        if(DP[i][level-1]+wart<DP[mid][level])
        {
            DP[mid][level]=DP[i][level-1]+wart;
            ktory=i;
            best=wart;
            drugi.clear();
        }
        if(i!=mid)
        {
                    nowa[tablica[i+1]]--;
        wart-= nowa[tablica[i+1]];
        pierwszy.push_back(tablica[i+1]);
        drugi.push_back(tablica[i+1]);
        }



    }
   //cout<<nowa[3]<<endl;
     //   cout<<mid<<" "<<level<<endl;
//cout<<DP[mid][level]<<endl;
    //  cout<<DP[mid][level]<<endl;
    for(int i=0; i<pierwszy.size(); i++)
    {
        nowa[pierwszy[i]]++;
    }
 //   cout<<nowa[3]<<endl;
    vector<int> przekaz;
    for(int i=mid; i>(mid-1+a)/2; i--)
    {
        nowa[tablica[i]]--;
        aktual-=nowa[tablica[i]];
        przekaz.push_back(tablica[i]);
    }
  //  cout<<nowa[3]<<endl;
    //  cout<<ktory<<" "<<aktual<<endl;
  //  cout<<aktual<<endl;
    if((a+b)/2!=a)
    funkcja(a,(a+b)/2-1,lewy,ktory,level,nowa,aktual);
   //    cout<<nowa[3]<<endl;
        for(int i=0; i<przekaz.size(); i++)
    {
        nowa[przekaz[i]]++;
    }
 //   cout<<nowa[3]<<endl;
    for(int i=0; i<pierwszy.size(); i++)
    {
       // cout<<pierwszy[i]<<endl;
        nowa[pierwszy[i]]--;
    }

  //  cout<<nowa[3]<<endl;
    for(int i=0; i<drugi.size(); i++)
    {
        nowa[drugi[i]]++;
    }
  //  cout<<nowa[3]<<endl;
    //cout<<best<<endl;
   // cout<<nowa[tablica[mid+1]]<<endl;
   vector<int>zmiany;
    for(int i=mid+1; i<=(mid+1+b)/2; i++)
    {
        best+=nowa[tablica[i]];
      //  cout<<best<<endl;
        nowa[tablica[i]]++;
        zmiany.push_back(tablica[i]);
    }
   // cout<<best<<endl;
   if((a+b)/2!=b)
    funkcja((a+b)/2+1,b,ktory,prawy,level,nowa,best);
    for(int i=0;i<zmiany.size();i++)
        nowa[zmiany[i]]--;
    for(int i=0;i<pierwszy.size();i++)
        nowa[pierwszy[i]]++;
        for(int i=0;i<drugi.size();i++)
        nowa[drugi[i]]--;
    //cout<<mid<<" "<<level<<endl;
//cout<<DP[mid][level]<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>tablica[i];
    }
    for(int i=1; i<=n; i++)
        for(int j=1; j<=k; j++)
            DP[i][j]=INF;
    int pomocnicza[n+1];
    for(int i=0; i<=n; i++)
    {
        pomocnicza[i]=0;
    }
    long long int how_many=0;
    for(int i=1; i<=n; i++)
    {

        DP[i][1]=how_many+pomocnicza[tablica[i]];
        how_many=DP[i][1];
        pomocnicza[tablica[i]]++;
       //  cout<<DP[i][1]<<endl;
    }


    for(int i=2; i<=k; i++)
    {
           int liczby[n+1];
    for(int j=0; j<=n; j++)
    {
        liczby[j]=0;
    }
   long long int ile=0;
    for(int j=2; j<=(n+1)/2; j++)
    {
        ile+=liczby[tablica[j]];
        liczby[tablica[j]]++;
    }
        //cout<<ile<<endl;
        funkcja(1,n,1,n,i,liczby,ile);


    }
    cout<<DP[n][k];
    return 0;
}
