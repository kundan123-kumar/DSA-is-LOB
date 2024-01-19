#include <iostream>
using namespace std;

int main() {
    
    int arr[8]={2,4,6,8,9,12,56,80};
    int size=8;
    
    int start=0;
    int end=size-1;
    
  while(true){
      if(start>end)
      break;
      if(start==end){
          cout<<arr[start]<<" ";
      }
      else{
            cout<<arr[start]<<" ";
      cout<<arr[end]<<" ";  
      }
      start++;
      end--;
  }
	return 0;
}
