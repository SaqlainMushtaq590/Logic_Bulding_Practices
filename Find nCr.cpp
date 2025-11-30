#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	
	for(int i=1; i<=n; i++){
		fact *=i;
	}
	return fact;
}

int nCr(int n, int r){
	int fact_n= factorial(n);
	int fact_r= factorial(r);
	int fact_nMr= factorial(n-r);
	 
	return fact_n/(fact_r*fact_nMr);
}

int main(){
	cout<<"<><> LET'S FIND nCr <><>"<<endl;
	
	int x;
	cout<<" Enter n: ";
	cin>>x;
	
	int y;
	cout<<" Enter r: ";
	cin>>y;
	
	cout<<" nCr = "<<nCr(x,y)<<endl;
	
	return 0;
}
