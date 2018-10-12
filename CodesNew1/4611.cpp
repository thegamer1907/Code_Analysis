#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    
    scanf("%d" , &n);
    
    for(int i = 0 ; i < n ; ++i){
        int num;
        scanf("%d" ,&num );
        v.push_back(num);
    }
    
    int kan = v.size()-1;
    int counter = 0;

    sort(v.begin() , v.end());

    for(int i = (v.size()/2)-1 ; i >= 0 ; --i){
        if(v[i] <= v[kan]/2){
            kan--;
            ++counter;
        }
    }

    printf("%d\n" , v.size()-counter);
    return 0;
}
