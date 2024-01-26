#include <iostream>
using namespace std;
int main(){

    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};   //arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}}

    cout<<arr[1][2];

// 2D array in Heap

int *xarr[3];     // this created in stack.
//We are creating 2D Array 3X4.
xarr[0]= new int[4];       //
xarr[1]= new int[4];       //    xarr 0,1,2 are created inside heap
xarr[2]= new int[4];

// Whole 2D array inside Heap

int ** arr3=new int*[3];
arr3[0] =new int[4];
arr3[1] =new int[4];
arr3[2] =new int[4];








return 0;
}

/*
Notes:
Address(arr[i])=Base_Add+index*sizeofDataType.



*/