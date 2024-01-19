#include <iostream>
using namespace std;

bool find(int arr[], int size, int key){
    //linear search
    for(int i=0; i<size; i++){
        if(arr[i]==key)
            return true;
         }
         //not present
        return false;
}
int main() {
 int arr[5]={2,5,8,13,56};
 int size =5;
 cout<<"Enter the key found or not"<<endl;
 int key;
 cin>>key;
 if(find(arr,size,key)){
     cout<<"FOUND"<<endl;
 }
 else{
     cout<<"NOT FOUND"<<endl;;
 }
	return 0;
}
