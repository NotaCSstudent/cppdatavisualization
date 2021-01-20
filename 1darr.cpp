#include <iostream>
using namespace std;
void d1arr(){
int *arr; //creating a pointer for our array
size_t N = 3; //Will be our array for testing
arr = new int[N+1]; //will be the elements of our array

/*
since we are using N+1
the array won't be just 
0,1,2
but now
0,1,2,3
so when we want to reach the end of the array
we can use the number 3 instead of two

*/
//We will add random numbers for the 1d array
arr[0] = 43;
arr[1] = 23;
arr[2] = 21;
arr[3] = 43;

for(int i = 0;i<=N;i++)
{
    cout << arr[i] << endl;
}

delete arr; // We will delete the array to avoid memory leak
}