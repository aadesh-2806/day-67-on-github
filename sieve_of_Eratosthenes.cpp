#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned i,n,s;
	cin>>n;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(s=i*i; s<=n ; s+=i){
                prime[s]=false;
            }
        }
    }
    for(i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
	
}
