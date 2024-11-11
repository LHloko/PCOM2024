#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,m;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n>>m;
        int a = 1, f = 0, r = 0;

        while(f<m){
            if(a%n != 0){
                r = a;
                f+=1;
            }
            a += 1;
        }
        cout<<r<<endl;
    }


    return 0;
}