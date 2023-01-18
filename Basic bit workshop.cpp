#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
const unsigned int M = 1000000007;

 //print binary
void binary(int num){
        for(int i=10;i>=0;i--){
            cout<<((num>>i) & 1);
        }
        cout<<endl;
    }
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<INT_MAX<<endl;//max num in c++
    //unsigned int a=(1ll<<32)-1;//unsingned int
    //cout<<a;
    //cheack bit set or not
    binary(10);
    int a=10;
    int i=1;
    if((a&(1<<i))!=0)cout<<"Yes";
    else cout<<"No";
    
}
