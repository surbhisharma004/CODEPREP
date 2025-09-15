#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,i,j;
    cout<< "enter rows and cols :" << endl;
    cin>> n>> m;
    for(i=0; i<n; i++) {
        for(j=0; j<=n-i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
    

}
