#include <iostream>
using namespace std;

//division method
int decimalToBinaryMethod1(int n){
    while(n>0){
        int bit=n%2;
        cout<<bit<<endl;
        n=n/2;
    }
    return 0;
}
int main() {
	int n;
	cin>>n;
// 	cout<<"decimal to binary "<<endl;
	int binary= decimalToBinaryMethod1(n);

}
