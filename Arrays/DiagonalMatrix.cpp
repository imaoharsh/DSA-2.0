/*
Except digonal elements all elements must be zero.
In diagonal matrix number of rows equal to number of columns.


In this code we are creating diagonal array using heap.
*/
#include <iostream>
using namespace std;


struct D_Matrices{
    int n;    //n:size of array
    int*arr;
    int r;     // r: number of row

    // Constructor to initialize n and allocate memory
    D_Matrices(int n){
        arr = new int[n];
    }

    // Destructor to free dynamically allocated memory
    // ~D_Matrices(){
    //     delete[] arr;
    // }



};

void Set(struct D_Matrices *m,int i,int j,int x){

    if(i==j){
        m->arr[i-1]=x;
    }

}

int Get(struct D_Matrices m,int i,int j){
    if(i==j){
        return m.arr[i-1];

    }
    else
    return 0;

}

void Display(struct D_Matrices m){
   
    for(int i=0;i<m.r;i++){
        for(int j=0;j<m.r;j++){
            if(i==j){
                cout<<m.arr[i];
            }
            else{
            cout<<0;
            }
        }
        cout<<endl;
    }

}






int main(){
    
   D_Matrices arr(10);
   arr.r=4;

   Set(&arr,1,1,5);
   Set(&arr,2,2,6);
   Set(&arr,3,3,8);
   Set(&arr,4,4,2);

   Display(arr);





    return 0;
}

