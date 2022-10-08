#include <iostream>

using namespace std;

int main() {
  int a(0), b(0), c(0);
  int result(0);
  
  cout << "Podaj a b c: ";
  cin >> a >> b >> c;

  if (a < b) {
    if (b<c) {
      result = c;    
    } else {
      result = b;
    }
  } else {
    if (a<c) {
      result = c;
    } else {
      result = a;
    }
  }

  cout << result << endl;
}