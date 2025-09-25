#include <iostream>
using namespace std;

void subSequence(string str, string output, int index){
    //base case
    if(index>=str.length()){
        cout<<"->"<<output<<endl;
        return; //answer ban chuka h
    }

    //processing
    char ch = str[index];

     //exclude
    // subSequence(str,output,index+1);
   
    // //include
    // output.push_back(ch);
    // subSequence(str,output,index+1);

    //second method
    //include
    output.push_back(ch);
    subSequence(str,output,index+1);

    //exclude
    output.pop_back();
    subSequence(str,output,index+1);

}

int main(){
   
     string str = "abc";
     string output = "";
     int index = 0;
     subSequence(str,output,index);

    return 0;
}

//same way you  can also store the values to the vector 