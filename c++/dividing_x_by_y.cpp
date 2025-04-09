#include <iostream>
using namespace std;

int main() {
double z,w,x,y;
cout<< "Dividing x by y"<<endl;
cin>>x>>y;

if(x>0 && y>0){
    z=x/y;
    cout<<z<<endl;
}


if(x>0 && y<0){

    cout<<"divisao impossivel"<<endl;
}
if(x<0 && y<0){
w=x/y;

    cout<<w<<endl;
}
    return 0;
}