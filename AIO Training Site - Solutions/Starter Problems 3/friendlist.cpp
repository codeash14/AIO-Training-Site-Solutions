#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("listin.txt","r",stdin);
    freopen("listout.txt","w",stdout);

    int f,j=0;
    cin>>f;
    int arr[1001];
    for(int i=0;i<1001;i++)
    arr[i]=0;
    for(int i=0;i<f;i++){
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
    }

    int m1=0;
    for(int i=0;i<1001;i++){
        if(arr[i]>=m1)
        m1=arr[i];
    }
    for(int i=0;i<1001;i++){
        if(arr[i]==m1)
        cout<<i<<'\n';
    }
    

    return 0;
}