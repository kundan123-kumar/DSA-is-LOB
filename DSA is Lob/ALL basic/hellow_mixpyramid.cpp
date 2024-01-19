#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        //half pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        //use space full pyramid
        for(int col=0; col<2*row+1; col++){
            cout<<" ";
        }
        //half pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    // same inverted 
      for(int row=0; row<n; row++){
        //half pyramid
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        //use space full pyramid
        for(int col=0; col<2*n-2*row-1; col++){
            cout<<" ";
        }
        //half pyramid
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
	return 0;
}
