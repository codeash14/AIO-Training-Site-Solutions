#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("sitin.txt","r",stdin);
	freopen("sitout.txt","w",stdout);
	int r,s,tickets;
	cin>>r>>s;
	cin>>tickets;
	int total_seats=r*s;
	int stand=tickets-total_seats;
	if(stand>0)
		cout<<total_seats<<' '<<stand<<'\n';
	else
		cout<<total_seats<<" "<<0<<'\n';
	
	return 0;
}