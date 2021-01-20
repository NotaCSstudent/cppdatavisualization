#include <iostream>
using namespace std;

void dotproduct()
{
    /*
    in this we will implement a dot product from scratch with two arrays
    */
   size_t N = 3;
    int *arr1,*arr2;//Create pointer for two arrays
    arr1 = new int[N+1];
    arr2 = new int[N+1];
    for(int i =0;i<N+1;i++)
    {
        arr1[i] = i+1;
        arr2[i] = (N+1)-i;
    }
    for(int i =0; i<N+1;i++)
    {
        //Printing two arrays
        cout << "{" << arr1[i] << "} {" << arr2[i] << "}" << endl; 
    }
    int dotprod = 0;//Our dot product

    for(int i =0;i<N+1;i++)
    {
        dotprod += arr1[i]*arr2[i]; //calculate dot product
    }
    cout << "The dot product of both arrays is " << dotprod << endl;
 //Deleting both arrays to avoid memory leak
    delete arr1;
    delete arr2;
   
}