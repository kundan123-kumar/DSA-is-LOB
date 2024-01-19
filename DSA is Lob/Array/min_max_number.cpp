#include <iostream>
#include<limits.h>
using namespace std;

// int main() {
//     int size=16;
// 	int arr[16]={3,56,78,111,3,9,4,2,54,78,90,12,23,44,66,90};
// 	int maxi=INT_MIN;
// 	for(int i=0; i<size; i++){
// 	    if(arr[i]>maxi){
// 	        //found number grater than the maxi,update maxi
// 	        maxi=arr[i];
// 	    }
// 	}
// 	cout<<"maximum number is"<<" "<<maxi<<endl;
// 	return 0;
// }

int main() {
    int size=16;
	int arr[16]={3,56,78,111,3,9,4,2,54,78,90,12,23,44,66,90};
	int min=INT_MAX;
	for(int i=0; i<size; i++){
	    if(arr[i]<min){
	        //found number grater than the maxi,update maxi
	        min=arr[i];
	    }
	}
	cout<<"minimum number is"<<" "<<min<<endl;
	return 0;
}