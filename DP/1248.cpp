  #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    
   // if(n==1) { cout<<"0"; return 0; }
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);
    for(int i=0;i<n;++i)
    {
        cin>>v1[i];
        if(v1[i]==0) v2[i]=1;
        else v2[i]=-1;
    }
    
    int start = 0;
    int end = 0;
    int max_so_far=0,max_ending_here=0,s=0;
    
    for(int i=0;i<n;++i)
    {
        max_so_far+=v2[i];
        if(max_so_far<0) { max_so_far=0; s=i+1; }
        if(max_so_far>max_ending_here) { max_ending_here=max_so_far; end=i; start=s; }
    }
    
    //cout<<start<<" "<<end<<" ";
    //if(res<=0){
      //  cout << n - 1 << endl;

        //cout << start << end << endl;
        
    if(max_ending_here<=0) { cout<<n-1; return 0; }
        int res=0;
        res += accumulate(v1.begin(), v1.begin() + start, 0) +
               accumulate(v1.begin() + end + 1, v1.end(), 0);
                for(int i=start;i<=end;i++)
               if(v1[i]==0) res++;
               
               cout << res << endl;
    
    
    return 0;
}