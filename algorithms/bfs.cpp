#include <iostream>
#include <vector>
using namespace std;

vector<int> a[100];
int    visited[100];


void dfs(int k){

    if(!visited[k]){
        visited[k]=1;
        for(int i=0;i<a[k].size();i++){
            if(!visited[a[k][i]]){
                dfs(a[k][i]);
            }
        }
    }
}


int main(){

    int n = 5;// nodes from 0 to 7 that is only nodes are there
    while(n--){
        int p,q;
        cin>>p>>q;
        a[p].push_back(q);
    }

    dfs(0);
    for(int i=0;i<=7;i++){
        cout<<i<<" : "<<visited[i]<<" ";
    }
    for(int i=0;i<=5;i++)
    cout<<endl;
    return 0;
}