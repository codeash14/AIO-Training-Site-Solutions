#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n%11==1)
    return true;
    else
    return false;
}

int main(){
    freopen("taktakin.txt","r",stdin);
    freopen("taktakout.txt","w",stdout);
    int n;
    cin>>n;
    int i=0;
    while(!solve(n)){
        i++;
        n=2*n;
    }
    cout<<i<<" "<<n<<'\n';
    return 0;
}