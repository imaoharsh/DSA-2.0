#include <iostream>
#include <vector>
#include<set>
using namespace std;

int RemoveDuplicate(int arr[],int n){
    

    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int k=st.size();
    
    int index=0;
    for(int it:st){
        arr[index]=it;
        index++;
    }

    return k;
}; 

// checking the comments

vector <int> fun(vector<int> &v1,vector<int>&v2){
    int i=0;
    int j=0; 
    vector<int>ans;
    for(i,j;i<v1.size() && j<v2.size();){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v2[j]<v1[i]){
            j++;
        }
        else{
            ans.push_back(v1[i]);
            i++;
            j++;
        }
        
    }
  return  ans;

}


void RotateArrayByD_Elements(int arr[],int d,int n){

    d=d%n;

    vector <int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }

    //Shifting

    for(int i=0;i<n ;i++){
        arr[i-d]=arr[i];
    }

    //Pushing back

    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }

}






int main(){
    int arr[5]={1,2,8,8,7};
  //int k=  RemoveDuplicate(arr,5);

//   for(int i=0;i<k;i++){
//     cout<<arr[i];
//   }
//   cout<<endl;
    
// RotateArrayByD_Elements(arr,2,5);

// for(int i=0;i<5;i++){
//     cout<<arr[i];
//   }


 
 


vector<int> arr1{1,2,3,3,5,6};
vector<int> arr2{2,3,4,8};
vector<int> arr3=fun(arr1,arr2);

for(int i=0;i<arr3.size();i++){
    cout<<arr[i];
}

    
    
    return 0;
};

// Maximum lenght of array is 10^6 in cpp.
// if array declare globally than lenght is 10^7.
