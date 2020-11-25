#include <iostream>
using namespace std;
int main() {
  int a, i;
  int q = 0;
  cin >> a;
  int b;
  for (i=0; i<a; i++) {
    cin >> b;

    if (b%2 == 0) {
      for (int j = b; j>0; j--){
        cout << j << " ";
      }
    }
    else {
      for (int j = b; j>0; j--){
        if ((float)j==((float)b/2) + 0.5) {
          cout << j-1 << " ";
          j--;
          cout << j+1 << " ";
          continue;
        }
        cout << j << " ";
      }
    }
    //q++;
    cout << "\n";
  }
}