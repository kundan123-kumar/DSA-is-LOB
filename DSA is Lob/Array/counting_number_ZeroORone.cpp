#include <iostream>
using namespace std;

int main() {
	int arr[]={0,1,0,0,0,1,1,0,1,1,0,1,0,1,0,0,1,1,1};
	int size = 19;
	int numZero=0;
	int numOne=0;
	for(int i=0; i<size; i++){
	    //if Zerofound increment num zero;
	    if(arr[i]==0){
	      numZero++;
	    }
	 if(arr[i]==1){
	     numOne++;
	 }
	}
	cout<<"Number is zeros"<<" "<<numZero<<endl;
		cout<<"Number is ones"<<" "<<numOne<<endl;
	return 0;
}
