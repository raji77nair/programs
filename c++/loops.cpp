#include <iostream>
using namespace std;

int main() {
int a,sum=0;
cout<<"enter the numbers: "<<endl;
cin>>a;
// while(a<=18){
//     cout<<"the loop is goin on"<<a<<endl;
//     a++;
   
// }

// do{
//      cout<<"the loop is goin on"<<a<<endl;
//     a++;
// }while(a<=18);

// for (int i=1;i<=a;i++){
//     cout<<"the count goes on: "<<i<<endl;
// }
    
for(int i=1;i<=a;i++){
    sum+=i;
    cout<<""<<sum<<endl;
}
    
    return 0;
}


