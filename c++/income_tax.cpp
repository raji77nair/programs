#include <iostream>
using namespace std;

int main() {
    float code,quantity,temp,burger,pizza,pasta,salad,drink,total;
    cout<<"welcomt to the restaurent"<<endl;


 if(code==0){
    cout<<"the billing of the order .Thank you!!! ";
     if(code==1){
        burger=150*quantity;
        cout<<" burger: "<<burger<<endl;
     }
     if(code==2){
        pizza=250*quantity;
        cout<<"pizza: "<<pizza<<endl;
     }
     if(code==3){
        pasta=200*quantity;
        cout<<"pasta: "<<pasta<<endl;
     }
     if(code==4){
        salad=100*quantity;
        cout<<"salad: "<<salad<<endl;
     }
     if(code==5){
        drink=50*quantity;
        cout<<" drink: "<<drink<<endl;
     }
     total=burger+pizza+pasta+salad+drink;

cout<<"The total of the bill is: "<<total<<endl;

}
else{
    cout<<"please enter a valid"<<endl;
}

    return 0;
}