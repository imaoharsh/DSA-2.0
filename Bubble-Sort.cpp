#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr){

    for(int i=arr.size()-1;i>=1;i--){
        
        for(int j=0;j<=i-1;j++){
            if(arr[j+1]<arr[j]){
              swap(arr[j+1],arr[j]);  
            }

        }
        
    }

}

void Display(vector<int> &arr){

for(int i=0;i<arr.size();i++){
    cout<<arr[i];
}


}




 int main(){
vector<int> arr;
arr.push_back(5);
arr.push_back(1);
arr.push_back(8);
arr.push_back(2);
arr.push_back(4);
arr.push_back(3);


BubbleSort(arr);

Display(arr);

    return 0;
 }
