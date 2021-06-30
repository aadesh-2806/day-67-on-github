#include<iostream>

using namespace std;

int rec_bool(unsigned n){
	if(n>1)
		rec_bool(n/2);
	cout<<n%2;
}
int main(){
	unsigned n;
	cin>>n;
	rec_bool(n);
}
