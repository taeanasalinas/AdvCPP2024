#include <iostream>

using namespace std;


template <typename T>

T findMax(T a, T b) {

  return (a > b) ? a : b;

}

template <typename T>
T findMin(T a, T b) {
  return(a < b) ? a : b;
}
int main() {

  cout << "Max of 3 and 7: " << findMax(3, 7) << endl; 
  cout << "Min of 3 and 7: " << findMin(3, 7) << endl;



  return 0;

}
