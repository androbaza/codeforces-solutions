#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, i, j;
  int x;
  cin >> a;
  int b, win, wini, win2=0, wini2=-1;
  for (i=1; i<=a; i++) {
    cin >> x;
    vector<int> a(x);
    map<int,int> win;
    for (j=0; j<x; j++) {
      cin >> a[j];
      win [a[j]]++;
    } int result = -2;
    for (j=0; j<x; j++) { 
      if(win [a[j]]==1){
        if (result == -2 || a[result] > a[j] ){
          result = j;
        }
      } 
    }
  cout << ++result << endl;  
  } 
}