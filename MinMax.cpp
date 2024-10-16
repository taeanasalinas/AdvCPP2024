#include <iostream>
#include <fstream>

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

  ifstream inFile;

  inFile.open("Fractions.txt");

  if(inFile.is_open()) 
  {
    float a, b, c, d, n, m, x, y;
    inFile >> a, b;
    inFile >> n, m;
    inFile >> x, y;
    

    cout << a << " + " << b << " = " << a + b << endl;

    inFile.close();
  } else {
    cout << "Error on file" << endl;
  }


  

  return 0;

}
