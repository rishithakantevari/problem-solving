#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr , int st , int end){
  int i =-1, pivot =arr[end];

  for(int j=st; j<end ;j++){
    if(arr[j]<=pivot){
      i++;
      swap(arr[j],arr[i]);
    }

  }

  swap(arr[end],arr[i+1]);
  return i + 1;
}

void quickSort(vector<int> &arr, int st , int end){
  if(st < end)
  {
    int pivIdx = partition (arr, st , end);
    quickSort(arr, st , pivIdx -1);
    quickSort( arr,pivIdx+1 ,end )
  }
}



int main (){
  vector<int> arr = {12,31,35,8,32,7};
  quickSort ( arr, 0,arr.size()-1);

  for( int val : arr) {
    cout << val << "";

  }
  cout << endl;
  return 0;
}