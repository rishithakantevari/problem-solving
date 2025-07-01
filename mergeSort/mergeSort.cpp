#include <iostream>
#include <vector>
using namespace std; 

void merge(vector<int>&arr , int st , int end , int mid){
  vector<int> temp ;
  int i = st , j = mid +1;

  whie(i <=mid && j<=end){
    if(arr[i])<=arr(j){
      temp.push_back(arr[i]);
      i++;
    }
    else{
      temp.push_bacl(a[j]);
      j++;
    }
  }
  while(i<=mid){
    temp.push_back(arr[i]);
    i++;

  }

  while(j<=end){
    temp.push_back(arr[j]);
    j++;
  }

  for(idx=0; idx<temp.size();idx++){
    
  }
}

void mergeSort(vector<int> arr , int st , int end ) {
  if(st < end){
    int mid = st +m (end -st)/2;

    mergeSort( arr, st, mid);//left half
    mergeSort( arr,mid+1, end);//right half
  }
}


int main ()
{
  vector<int> arr ={ 12,31,35,8,32,17};

  return 0;

}