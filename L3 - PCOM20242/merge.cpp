#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin>> A >>B;

    vector<int> a(A), b(B);

    for(auto &i: a)
        cin >> i;

    for(auto &i: b)
        cin >> i;

    int ai=0, bi=0;

    while(ai < a.size()){
        while(b[bi] < a[ai])
            cout<< b[bi++]<< ' ';
        cout<< a[ai++] << ' ';
    }

    while(bi < b.size()){
        cout<< b[bi++] << ' ';
    }
    while(ai < a.size()){
        cout<< a[ai++] << ' ';
    }

    cout<<endl;

    return 0;
}