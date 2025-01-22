#include <iostream>
#include <vector>
using namespace std;

//printing the array..

void printv(vector<int> v){
    int size = v.size();
    for(int i =0; i<size; i++){
        cout<<v[i]<<endl;
    }
}

int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(17);
    v.push_back(19);
    v.push_back(12);

    cout<<"capacity :"<<v.capacity()<<"  Size: "<<v.size()<<endl;

    //pop = v.pop_back(), v.push_back()
    // v.at() printing the ith index of vector
    //
    printv(v);

    //for clearing the vector
    //v.clear();

    //vector initialisation
    vector<int>arr;
    vector<int>arr2(5,-1); // initialised with specific data
    printv(arr2);

    vector<int>arr3 = {1,2,3,4,5,6}; //with specific  data
    vector<int>arr3{1,2,3,4,5,6};

    //how to copy an vector
    vector<int>arr5 = {1,2,4,5,6,7};
    vector<int>arr6(arr5);

    
    return 0;
}