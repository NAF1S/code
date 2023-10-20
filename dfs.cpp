#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define fi first
#define se second
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n=6;
vector<vector<int>>graph(n);

vector<bool>vis(n);

void dfs(int node){
    if(vis[node])return;
    vis[node]=true;
    for(int x:graph[node]){
        dfs(x);
    }
}

int main(){
    graph[0] = {1,2,4};
    graph[1] = {3,4};
    graph[2] = {5};
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
        else{
            cout<<i<< " ";//printing all visited node
        }
    }
}
