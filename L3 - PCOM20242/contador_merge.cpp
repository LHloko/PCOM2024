#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin>> A >>B;

    vector<int> a(A), b(B);

    for(auto &i: a){
        cin >> i;
        cout << i<<' ';
    } cout<< endl;
    for(auto &i: b){
        cin >> i;
        cout << i<<' ';
    } cout<< endl;

    int ai=0, bi=0, c=0;

    while(bi < b.size()){
        while(b[bi] > a[ai] && ai < a.size()){
            c++;
            ai++;
        }

        cout<< b[bi++] << ": "<< c<< endl;
    }

    cout<<endl;

    return 0;
}