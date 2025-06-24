#include <iostream>
using namespace std;

int main() {
    string name;
    float salary,product_sold,formula,total;
    cin>>name;
    // cout<<name<<endl;
    cin>>salary;
    //cout<<salary<<endl;
    cin>>product_sold;

    formula=product_sold*15/100;
    cout<<formula<<endl;
    
    total=formula+salary;
    cout<<"total="<<total;
return 0;
}