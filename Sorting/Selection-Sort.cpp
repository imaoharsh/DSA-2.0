#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &arr){

    for(int i=0;i<arr.size();i++){
        int min=i;
        for(int j=i;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min=j;
            }

        }
        swap(arr[i],arr[min]);
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
arr.push_back(4);
arr.push_back(2);

SelectionSort(arr);

Display(arr);

    return 0;
 }
