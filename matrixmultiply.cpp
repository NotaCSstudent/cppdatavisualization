#include <iostream>
using namespace std;

void matmult()
{
    int i,j,k; //loop variables
    int **arr1,**arr2,**arr3; //Three arrays will be created
    size_t M = 3, N = 2, P = 4; //Our three different array sizes
    arr1 = new int*[M+1];
    arr2 = new int*[P+1];
    arr3 = new int*[N+1];

    for(i =1; i<=M;i++)
    {
        arr1[i] = new int[P+1];//3x4 matrix
    }
    for(j =1; j<=P;j++)
    {
        arr2[j] = new int[N+1]; //4x2 matrix
    }
    for(k = 1;k < N; k++)
    {
        arr3[k] = new int[N+1]; // 2x2  matrix
    }



         arr1[1][1]=2; arr1[1][2]=-3; arr1[1][3]=1; arr1[1][4]=5;
               arr1[2][1]=-1; arr1[2][2]=4; arr1[2][3]=-4; arr1[2][4]=-2;
               arr1[3][1]=0; arr1[3][2]=-3; arr1[3][3]=4; arr1[3][4]=2;
               cout << "Matrix A:" << endl;
            
               int x = 1;
               while(x<=M)
               {
                   for(j=1;j<=P;j++)
                   {
                      cout << "{" << arr1[x][j] << "} ";
                   }
                   cout << endl;
                    x++;

               }

                    


                    arr2[1][1]=4; arr2[1][2]=-1;
                    arr2[2][1]=3; arr2[2][2]=2;
                    arr2[3][1]=1; arr2[3][2]=-1;
                    arr2[4][1]=-2; arr2[4][2]=4;
                    cout << endl << "Matrix B:" << endl;
                   x=1; 
            while(x<=P)
            {
             for(j=1; j<=N;j++)
             {
                 cout << "{" << arr2[x][j] << "} ";
             /* LITTLE RANT HERE THIS IS WHY YOU DONT COPY AND PASTE YOUR OWN CODE, CAUSE YOU WILL FORGET AND WASTE MAD TIME DEBUGGING >:(*/
             }   
             cout << endl;
             x++;
            }

  /*
  
  
            cout << endl << "Matrix C (A multiplied by B):" << endl;

            for (i=1; i<=M; i++)
     {
           for (j=1;j<=N;j++)
           {
                  arr3[i][j]=0;
                  for (k=1;k<=P;k++)
                        arr3[i][j] += arr1[i][k]*arr2[k][j];
                  cout << arr3[i][j] << " ";
           }
           cout << endl;
     }*/

     ///need to learn matrix multiplication in higher dimensions for this -_-
     
}