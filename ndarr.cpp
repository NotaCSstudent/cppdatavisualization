#include <iostream>
using namespace std;

void ndarr()
{   
   int N = 5;
   int M = 5;
    int **ndarr;
    ndarr = new int *[M+1];//Column
    for(int i =0;i<M;i++)
     {
         ndarr[i] = new int[N+1];//ROWS
     }

     for(int i =0; i<M;i++)
     {
         for(int j = 0; j<N;j++)
         {
             ndarr[i][j] = i+1;
             /* [i] would be each column of numbers 
             while j is the row it spits out
             so basically 
             [1] 1,1,1,1,1
             [2] 2,2,2,2,2
             [3] 3,3,3,3,3
             [4] 4,4,4,4,4
             [5] 5,5,5,5,5
             
             */
         }
     }
int x =0;
          while(x<M)
          {
              for(int i=0; i<N;i++)
              {
                  cout << "{" << ndarr[x][i] << "}";
              }
              cout << endl;
              x++;
          }
delete ndarr; //avoid memory leak

}