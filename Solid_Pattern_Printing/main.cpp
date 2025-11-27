// Print Solid Pattern Printing
/******
  *****
  *****
  ******/


#include<iostream>
using namespace std;
int main(){
cout<<"Enter The Outer Loop Number:-";
int n;
cin>>n;

for (int i=0;i<n; i++){//Outer low show the Colon and jump next Line
    for(int j=0; j<n;j++){// Inner Loop Show  the print star print
        cout<<"*";
    }
    cout<<"\n";
}


}
