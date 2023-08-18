#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v;
    for(int i=0;i<a;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<v.size;i++){
        cout<<v[i];
    }return 0;
}