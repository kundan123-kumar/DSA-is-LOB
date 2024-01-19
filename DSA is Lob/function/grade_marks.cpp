#include <iostream>
using namespace std;

// void printCounting(int n){
//     for(int i=0; i<=n; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<"enter the value of n"<<endl;
//     printCounting(n);

    char getGrade(int marks){
        if(marks>=90){
            return 'A';
        }
        else if(marks>=80){
            return 'B';
        }
        else if(marks>=60){
            return 'C';
        }
        else if(marks>=40){
            return 'D';
        }
        else{
            return 'F';
        }
        return 0;
        
    }
    int main(){
        int marks;
        cin>>marks;
        cout<<"Enter the marks"<<endl;
       char finalGrade=getGrade(marks);
       cout<<finalGrade;
       	return 0;
}
