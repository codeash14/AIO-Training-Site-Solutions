#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("dishin.txt","r",stdin);
    freopen("dishout.txt","w",stdout);
    ll min,max,mean,sum=0;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    max=a[0];
    min=a[0];
    for(ll i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum+=a[i];
    }
    mean=sum/n;
    cout<<min<<" "<<max<<" "<<mean<<endl;
    return 0;
}