#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    vector<int> v;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
    // 
    int alice = 0;
    int bob = 0;


    // Crio uma max-heap para organizar o maior elemento no topo
    make_heap(v.begin(), v.end());

    int i = 0;
    while(!v.empty()){
        pop_heap(v.begin(), v.end());
        int pecinha = v.back();
        v.pop_back();

        if( i%2 == 0) //Vez da alice
            alice += pecinha;
        else
            bob += pecinha;
        i++;
    }

    cout<<alice<<" "<<bob<<endl;

    return 0;
}