#include<iostream>
#include<limits.h>
using namespace std;

//	//for maximum number in 2D array
//	int getMax(int arr[][3], int rows, int cols){
//		int maxi = INT_MIN;
//		for(int i=0; i<rows; i++){
//			for(int j=0; j<cols; j++){
//				if(arr[i][j]>maxi){
//					maxi=arr[i][j];
//				}
//			}
//		}
//		return maxi;
//	}
//	
//int main(){
//	int arr[3][3];
//	int rows=3;
//	int cols=3;
//	
//	for(int i=0; i<rows; i++){
//		for(int j=0; j<cols; j++){
//			cin>>arr[i][j];
//		}
//	}
//		cout<<"Printing row wise"<<endl;
//		for(int i=0; i<rows; i++){
//		for(int j=0; j<cols; j++){
//			cout<<arr[i][j]<<"  ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<getMax(arr,rows,cols);
//	
//	return 0;
//}

//fin minimum number in 2D array
	int getMini(int arr[][3], int rows, int cols){
		int mini = INT_MAX;
		for(int i=0; i<rows; i++){
			for(int j=0; j<cols; j++){
				if(arr[i][j]<mini){
					mini=arr[i][j];
				}
			}
		}
		return mini;
	}
	
int main(){
	int arr[3][3];
	int rows=3;
	int cols=3;
	
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cin>>arr[i][j];
		}
	}
		cout<<"Printing row wise"<<endl;
		for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
//	cout<<"Print maximum number"<<getMax(arr,rows,cols);
		cout<<"Print minimum number"<<getMini(arr,rows,cols);
	return 0;
}
