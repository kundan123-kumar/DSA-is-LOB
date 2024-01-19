#include <iostream>
using namespace std;

int main(){
    int arr[10]={3,4,7,9,10,35,47,80,36,55};
    int size=10;
    int start=0;
    int end=size-1;
    while(start<=end){
        //step1
        swap(arr[start],arr[end]);
        // step2
        start++;
        //step3
        end--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }
	return 0;
}
