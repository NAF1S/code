#include<bits/stdc++.h>
using namespace std;
int seive(int n){
	vector<bool> prime_list(n+1,true);
	prime_list[0] = prime_list[1] = false;
	for(int i=2;i<=n;i++){
		if(prime_list[i] &&(long long)i*i <= n){
			for(int j =i;j<=n;j+=i){
				prime_list[j] = false;
			}
		}
	}
	for(int i =0;i<=n;i++){
		if(prime_list[i]){
			cout << i<< " ";
		}
	}
}
int main(){
	seive(100);
	return 0;
}
