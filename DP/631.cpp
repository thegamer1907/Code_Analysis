 #include <iostream>
using namespace std;

int arr[100005]={0};

int main()

{

    string s;

    int acc=0,t;

    cin>>s>>t;

    int sz=s.size();

    for(int i=1;i<sz;i++){

        if(s[i]==s[i-1])acc++;

        arr[i]=acc;
    }

    for(int i=0;i<t;i++){

        int in1,in2;

        cin>>in1>>in2;

        cout<<arr[in2-1]-arr[in1-1]<<"\n";
    }

    return 0;
}
