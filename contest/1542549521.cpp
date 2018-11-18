#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("date.in");

int putereALui2(int a)
    {
     if(a==0) return 1;
      else if(a==1) return 2;
            else if(a==2) return 4;
                  else if(a==3) return 8;
    }

int main()
{
    int n=0,k=0;
    int viz[21]={0};
    cin>>n>>k;
    bool ok=false;
    for(int i=1;i<=n;++i)
        {
         int nr=0,x=0;
         for(int j=1;j<=k;++j)
            {
             cin>>x;
             //if(x==0) nr_negat+=putereALui2(k-j);
             if(x==1) nr+=putereALui2(k-j);
            }
         if(!nr)
            {
             //cout<<"YES";
             ok=true;
             //return 0;
            }
          else if((k==2 && nr!=3) || (k==3 && nr!=7) || (k==4 && nr!=15))
                    {
                     viz[nr]=1;
                     if(k==2)
                        {
                         for(int j=1;j<3;++j)
                            {
                             if(j!=nr)
                                {
                                 int aux=nr & j;
                                 if(aux==0 && viz[j])
                                    {
                                    //cout<<"YES";
                                    ok=true;
                                    //return 0;
                                    }
                                }
                            }
                        }
                      else if(k==3)
                                {
                                 for(int j=1;j<7;++j)
                                    {
                                     if(j!=nr)
                                        {
                                         int aux=nr & j;
                                         if(aux==0 && viz[j])
                                            {
                                             //cout<<"YES";
                                             ok=true;
                                             //return 0;
                                            }
                                        }
                                    }
                                }
                              else if(k==4)
                                        {
                                         for(int j=1;j<15;++j)
                                            {
                                             if(j!=nr)
                                                {
                                                 int aux=nr & j;
                                                 if(aux==0 && viz[j])
                                                    {
                                                     //cout<<"YES";
                                                     ok=true;
                                                     //return 0;
                                                    }
                                                }
                                            }
                                        }
                    }
        }
    if(!ok) cout<<"NO";
     else cout<<"YES";
    return 0;
}

	 	  				 	 	 	  						   	  	