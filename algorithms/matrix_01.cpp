#include <iostream>
#include <stdlib.h>
using namespace std;



int main(){
  int matrix[4][4] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

  int row = sizeof(matrix)/sizeof(matrix[0]);
  int col = sizeof(matrix[0])/sizeof(matrix[0][0]);
  int m[row][col];
  for(int i=0;i<row;i++){
      m[i][]=matrix[i][];
  }
  
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
      cout << m[i][j]<<endl;}
      cout<<endl;
  }


  

    return 0;
}