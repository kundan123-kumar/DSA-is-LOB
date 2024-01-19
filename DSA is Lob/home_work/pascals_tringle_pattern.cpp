#include<iostream>
using namespace std;
	int main(){
		int n;
		cin>>n;
		//es formula me 1 se i or j dono chalega
		for(int i=1; i<n; i++){
			int c=1;
			for(int j=1; j<i+1; j++){
				cout<<c<<" "; 
				c=c*(i-j)/j;
			}
			cout<<endl;
		}
	}
