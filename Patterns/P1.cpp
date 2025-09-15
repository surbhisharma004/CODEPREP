#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j;
cout << "enter number of rows and columns:" << endl;
cin>>n>>m;
for( i=0; i<n; i++)
{
    for(j=0; j<m; j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}

