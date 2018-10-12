    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main()
    {
    	int n,kango ;
    	vector<int>vec;
    	cin>>n;
    	for(int i=0;i<n;i++)
    		cin>>kango, vec.push_back(kango);
    	sort(vec.begin(),vec.end());
    	int hold=n/2 , ans=n;
    	for(int h=0;h<n/2;h++)
        {
    		for(;;){
    			if(vec[h]*2<=vec[hold]) {ans--;hold++;break;}
    			else hold++;
    			if(hold==n)break;
            }
    		if(hold==n) break;
    	}
    	cout<<ans<<endl;
        return 0;
   }
