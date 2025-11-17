#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"\n\tEnter a number to check wheather it is a prime or non-prime number?"<<endl;
	cin>>n;
	int i=2;
	
	while(i<= (n-1)){
		if (n%i == 0){
			cout<<"\tThe number "<<n<<" is Non-Prime number."<<endl;
			return 0;
		}
		else
		i++;
	}
	 cout<<"\tThe number "<<n<<" is a Prime number."<<endl;
	 
	 return 0;
}
