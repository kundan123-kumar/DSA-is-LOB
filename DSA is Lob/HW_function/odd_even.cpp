#include<iostream>
using namespace std;
 
 bool getEven(int n){
 	if(n%2==0){
 		return true;  //its an even no.
	 }
	 else{
	 	return false;  //its an odd no.
	 }
 }
 int main(){
 	int n;
 	cin>>n;
 	bool isEven=getEven(n);
 	
 	if(isEven){
 		cout<<n<<"is even number";
	 }
	 else{
	 	cout<<"is odd number";
	 }
 }
