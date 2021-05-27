#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("encyin.txt","r",stdin);
    // freopen("encyout.txt","w",stdout);

    int n,q;
    cin>>n>>q;
    int p[n];
    for(int i=0;i<n;i++)
    cin>>p[i];
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        cout<<p[x-1]<<'\n';
    }

    return 0;
}