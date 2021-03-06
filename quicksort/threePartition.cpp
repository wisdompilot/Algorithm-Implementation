#include <iostream>
#include <vector>

using namespace std;

void quicksort(vector<int> &x, int a, int b) {
    if (a >= b) 
        return;
    int p = x[b];
    int i = a, j = a;
    for (int t = a; t <= b; t++) {
        if (x[t] <= p) {
            swap(x[j++], x[t]);
        }
        if (i < j && x[j-1] < p)
            swap(x[i++], x[j-1]);
    }
    quicksort(x, a, i-1);
    quicksort(x, j, b);
}

void quicksort(vector<int> &x) {
    quicksort(x, 0, x.size()-1);
}

int main() {
  cout << "Hello Quicksort!" << endl; 
  vector<int> x = {7, 1, 4, 5, 3, 2};
//vector<int> x = {59,50,73,5,1,48,26,72,13,53,1,27,78,32,52,21,11,95,38,80,35,59,98,65,96,77,58};
  quicksort(x);
  for (auto v : x) {
      cout << v << endl;
      
  }
  return 0;
}
