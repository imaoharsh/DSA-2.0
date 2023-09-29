#include <iostream>
using namespace std;

void InsertionSort(vector<int> &arr){

for(int i=0;i<=arr.size()-1;i++){
    int j=i;
    while (j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j],arr[j-1]);
        j--;
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
arr.push_back(4);
arr.push_back(2);

InsertionSort(arr);

Display(arr);



    return 0;
}