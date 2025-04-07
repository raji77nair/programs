#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec={1,2,3,4,5};

    cout<< "size= " << vec.size() <<endl;
    for(int val :vec){

        cout<<val<<endl;
    }

    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout<< "after push back size = "<<vec.size() <<endl;

    for(int val :vec){

        cout<<val<<endl;
    }
vec.pop_back();
cout<< "after pop back size = "<<vec.size() <<endl;
vec.pop_back();
cout<< "after pop back size = "<<vec.size() <<endl;
for(int val :vec){

    cout<<val<<endl;
}
cout<< vec.front() <<endl;
cout<< vec.back() <<endl;
cout<< vec.at(6) <<endl;
    return 0;
}