#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,i,j;
    cout<< "enter rows and cols :" << endl;
    cin>> n>> m;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
    

}
