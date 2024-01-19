#include <iostream>
using namespace std;

int main() {
    // solid half diamond
    int n;
    cin>>n;

    for(int i=0; i<2*n-1; i++){
        int cond=0;
        if(i<n){// growung phase of diamond
            cond=i;
        }
       else{//shrinking condition
       cond=n-(i%n)-2;
     }
     for(int j=0; j<=cond; j++){
         cout<<"*";
     }

        cout<<endl;
    }
	return 0;
}
