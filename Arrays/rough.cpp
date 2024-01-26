 #include <iostream>
 #include <vector>
 using namespace std;

  void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        for(int i=nums.size()-1;i>=nums.size()-k;i--){
            temp.push_back(nums[i]);
        }
       // reverse(temp.begin(),temp.end());

          vector<int>temp2;
        
         for(int i=0;i<nums.size()-k;i++){
            temp2.push_back(nums[i]);
        }
        
        for(int i=0;i<nums.size()-k;i++){
            cout<<temp2[i];
        }
        
        
    }
 int main(){

    // vector<int>arr;
    // arr.push_back(1);
    //  arr.push_back(2);
    //   arr.push_back(3);
    //    arr.push_back(4);
    //     arr.push_back(5);
    //      arr.push_back(6);
    //       arr.push_back(7);

    //     arr.clear();
          
    //      for(int i=0;i<7;i++){
    //         cout<<arr[i];
    //       }


    int arr[]={1,2,3,4,5};

    cout<<(2[arr])<<endl;
    cout<<(*(arr+3));
    

    //rotate(arr,3);

 }