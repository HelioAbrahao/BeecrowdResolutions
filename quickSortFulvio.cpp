#include <iostream>
#include <algorithm>

using namespace std;

int v[1000];

void quicksort(int l, int r) {
    if (r <= l) return;
    int pivot = v[r];
    cout << pivot << endl;
    int ll = l, rr = r-1;
    while (ll <= rr) {
        if (v[rr] < pivot) {
            swap(v[rr], v[ll]);
            ll++;
        } else {
            rr--;
        }
    }
    swap(v[ll], v[r]);
    quicksort(l, ll - 1);
    quicksort(ll + 1, r);
}

int main () {
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    quicksort(0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}