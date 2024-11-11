#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, total = 0;
        cin>>n;

        if(n%4 == 0)
            total = n/4;
        else{
            total = n/4; 
            n = n%4;
            total += n/2;
        }

        cout<<total<<endl;
    }

    return 0;
}