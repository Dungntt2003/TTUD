#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e4 + 5;
int A[MAX];
int f;
int n;
int m0; 
int m;
int res = 0;

void Try(int k){
    if ( k == n && (m-f) >= A[k-1]){
        A[k] = m - f;
        res++;
        return;
    }
    m0 = m - f - (n-k);
    for (int i = A[k-1] ; i <= m0; i++){
        A[k] = i;
        f+= i;
        Try(k+1);
        f-= i;
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> m;
    for (int i = 1 ; i <= m ; i++){
        n = i;
        f = 0;
        A[0] = 1;
        Try(1);

    }
    cout << res << endl;
    return 0;
}
