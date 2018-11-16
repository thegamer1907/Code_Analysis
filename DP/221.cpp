    //just some shitty code
    #include <bits/stdc++.h>
    using namespace std;

/*    bool valid(int y,int x)
   {
       return x  >= 0 && x< m && y >= 0 && y < n;
   }
*/

    int main()
    {
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
       int n,m,arr[200],k,ans=0;
       vector<int> v;
       cin >>n;
       for(int i = 0 ; i < n ; i++)
       {
           cin >>arr[i];
       }
       cin >>m;
       for(int i = 0 ; i  <m ; i++)
       {
           cin >>k;
           v.push_back(k);
       }
       sort(arr,arr+n);
       sort(v.begin(),v.end());
       for(int i = 0 ; i < n ;i++)
       {
           for(int j = 0 ; j < v.size() ;j++)
           {
               if(abs(arr[i] - v[j]) ==0 ||abs(arr[i] - v[j]) == 1)
               {
                   ans++;
                   v.erase(v.begin()+j);
                   break;
               }
           }
       }
       cout <<ans <<endl;
    }
