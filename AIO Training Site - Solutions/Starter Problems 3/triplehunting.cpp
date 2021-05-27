#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tripin.txt","r",stdin);
    freopen("tripout.txt","w",stdout);

    int n,count=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%3==0){
            b[count]=i+1;
            count++;
        }
    }

    if(count==0)
    cout<<"Nothing here!";
    else{
    cout<<count<<'\n';
    for(int i=0;i<count;i++){
        cout<<b[i]<<" ";
    }
    }
    cout<<'\n';

    return 0;
}