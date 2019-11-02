#include <iostream>
using namespace std;
// Sum calculator : 1/ (1*2) +.....+ 1/(n*(n+1))
float SumExample6(int nValue);
// Sum calculator : 1/2 +.....+ n/((n+1))
float SumExample7(int nValue);
// Sum calculator : 1/ 2 +.....+ (2*n +1)/(2*n +2)
float SumExample8(int nValue);
// Sum calculator : 1*2*3 ....*n
float SumExample9(int nValue);

//Main
int main(){
  int nValue = 0;
  cout<<"Please input a value : ";
  cin>>nValue;
  // Call the function to Sum calculator at here
  cout<<"\nSum : "<<SumExample6(nValue);
  cout<<"\nSum : "<<SumExample7(nValue);
  cout<<"\nSum : "<<SumExample8(nValue);
  cout<<"\nSum : "<<SumExample9(nValue);
  system("pause");
  return 0;
}

// function

float SumExample6(int nValue){
  if(nValue == 0){
    return 0;
  }
  else{
    return ((float)1/(nValue * (nValue+1))) + SumExample6(nValue-1);
  }
}

float SumExample7(int nValue){
  if(nValue == 0){
    return 0;
  }
  else{
    return ((float)nValue/(nValue+1))+ SumExample7(nValue-1);
  }
}

float SumExample8(int nValue){
  if(nValue == 0){
    return 0;
  }
  else{
    return ((float)(2*nValue +1 ))/(2*nValue +2))+ TinhTongBai8(nValue-1);
  }
}

float SumExample9(int nValue){
  if(nValue == 1){
    return 1;
  }else{
    return nValue * SumExample9(nValue - 1);
  }
}
