#include <iosream>
using namespace std;

void solve(int arr[], int size){
    // cout<<"Size of array inside function: "<<sizeof(arr)<<endl;
    // cout<<"Inside solve -> arr: "<<arr<<endl;
    // cout<<"Inside solve -> &arr: "<<&arr<<endl;

    *arr = *arr+1;
}

int main(){

    int arr[] = {10,20,30,40};
    // cout<<"Size of array: "<<sizeof(arr)<<endl;
    solve(arr,4);

    for(int i =0; i<3; i++){
        cout<<arr[i]<<" ";
    }

    // cout<<"Inside main -> arr: "<<arr<<endl;
    // cout<<"inside main -> &arr: "<<&arr<<endl;

    return 0;
}