#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("rainin.txt","r",stdin);
    freopen("rainout.txt","w",stdout);
    ll n,t,a,cf=0,c=1;
    cin>>n>>t;
    for(ll i=0;i<n;i++){
        cin>>a;
        cf+=a;
        if(cf<t)
            c++;
    }
    cout<<c<<endl;

    return 0;
}