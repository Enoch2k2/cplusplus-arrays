#include <iostream>
using namespace std;

int main(){
  // an example of iterating through the length of the array
  int array[] = {1,2,3,4,5};
  for(int i = 0; i < (sizeof(array)/sizeof(*array)); i++){
    cout << array[i] << endl;
  }

  // exaple of getting the sum of numbers of an array;
  int arr[] = {11, 35, 62, 555, 989};
  int sum = 0;

  for (int x = 0; x < 5; x++) {
    sum += arr[x];
  }

  cout << sum << endl;
  return 0;
}
