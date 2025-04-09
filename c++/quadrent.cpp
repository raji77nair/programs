#include <iostream>
using namespace std;

int main() {
int x,y;
cout<< "Quadrent"<<endl;
cin>>x;
cin>>y;
cout<<x<<"," <<y<<endl;
if(x>0 && y>0){

    cout<<"primeiro"<<endl;
}

if(x<0 && y>0){

    cout<<"segundo"<<endl;
}
if(x>0 && y<0){

    cout<<"quarto"<<endl;
}
if(x<0 && y<0){

    cout<<"tercerio"<<endl;
}
    return 0;
}