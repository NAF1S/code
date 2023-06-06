#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define fi first
#define se second
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int mod = 1000000007;
void marge(int arr[],int l,int m,int r){
	int i ,j,k;
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++){
		L[i] = arr[l+i];
	}
	for(int i=0;i<n2;i++){
		R[i] = arr[m+1+i];
	}
	i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}
void margesort(int arr[],int l,int r){
	if(l<r){
		int m = l +(r-l)/2;
		margesort(arr,l,m);
		margesort(arr,m+1,r);
		marge(arr,l,m,r);
	}
}
int main(){
	int n;cin>>n;
	int box[n];
	for(int i=0;i<n;i++)
		cin>>box[i];
	margesort(box,0,n-1);
	for(int i=0;i<n;i++){
		cout<<box[i]<<" ";
	}
}
