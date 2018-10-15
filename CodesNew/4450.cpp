#include<bits/stdc++.h>
using namespace std;
#define ll long long
string str2[500100],str,res[500100];
struct trie
{
    trie* arr[26];
    bool isleaf;
};
trie* newnode()
{
    trie* p = (trie*)malloc(sizeof(trie));
    for (int i=0;i<26;i++)
        p->arr[i]=NULL;
    p->isleaf=false;
    return p;
}
trie* insertnode (ll idx,trie* root)
{
   if (idx==str.length()){
        root->isleaf=true;
        return root;
   }
    if (root->arr[str[idx]-'a']==NULL)
        root->arr[str[idx]-'a']=newnode();
    root->arr[str[idx]-'a']= insertnode (idx+1,root->arr[str[idx]-'a']);
    return root;
}
int solve (ll idx,trie* root)
{
    if (idx==str.length())
        return idx;
    ll op=str[idx]-'a',i;
    for (i=0;i<op;i++)
        if (root->arr[i]!=NULL){
                root->isleaf=true;
            return idx;
        }
    if (root->isleaf)
        return idx;
    return solve (idx+1,root->arr[op]);
}
int main()
{
    ll i,j,k,l,n;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    trie* root=newnode();
    for (i=0;i<n;i++)
    {
        cin>>str2[i];
    }
    bool flag=0;
    for (i=n-1;i>=0;i--)
    {
        str=str2[i].substr(1,str2[i].length()-1);
        root=insertnode(0,root);
        ll op = solve (0,root);
        if (op==0)
            flag=1;
        if (flag)
            op=0;
        res[i]=str.substr(0,op);
    }
    for  (i=0;i<n;i++)
        cout<<"#"<<res[i]<<'\n';
    return 0;
}
