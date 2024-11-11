#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n, m, k, a;
    cin>>n >>m >>k;

    // Tamanho desejado do apartamento 
    vector<int> desire;
    for(int i; i<n; i++){
        cin>>a;
        desire.push_back(a);
    }

    // Tamanho dos apartamentos
    vector<int> size_ap;
    for(int i; i<n; i++){
        cin>>a;
        size_ap.push_back(a);
    }

    



    return 0;
}