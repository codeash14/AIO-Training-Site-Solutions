#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("dictin.txt","r",stdin);
    freopen("dictout.txt","w",stdout);
    ll d,w,f,c;
    cin>>d>>w;
    ll a[d],b[d];
    for(ll i=0;i<d;i++){
        cin>>a[i]>>b[i];
    }
    for(ll i=0;i<w;i++){
        cin>>f;
        c=0;
        for(ll j=0;j<d;j++){
            if(a[j]==f){
                cout<<b[j]<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
        cout<<"C?"<<endl;
    }

    return 0;
}