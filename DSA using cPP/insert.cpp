#include <iostream>
using namespace std;

int main(){
    int arrays[4] = {1,2,4};
    int loc, item;
    int j,n;

    cout<<"Enter the location where you want to store your data: "<<endl;
    cin>> loc;

    cout<<"Enter the value: "<<endl;
    cin>> item;

    cout<<"Enter the item are in array: "<< endl;
    cin>>n;

    j = n - 1;
    while(j <= loc){
        arrays[j + 1] = arrays [j];
        j = j - 1;
    }
    arrays[loc] = item;
    n = n + 1;


    cout<<arrays[0]<<endl;
    cout<<arrays<<endl;

    return 0;

    
}