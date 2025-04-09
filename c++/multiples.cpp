#include <iostream>
using namespace std;

int main() {
int x,y,i;
cout<< "Multiples_by_13"<<endl;
cin>>x;
cin>>y;
i=0;
for (int j = x; j <=y; j++)
{
    if(j%13!=0){
        i+=j;
    }
}

cout<<i<<endl;
    return 0;
}