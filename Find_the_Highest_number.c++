#include <bits/stdc++.h>
using namespace std;

void inline scanint(int *x){
	*x = 0;
	register char c = getchar_unlocked();
	while(c <48 || c > 57){
		c = getchar_unlocked();
	}
	while(c >=48 && c <= 57){
		*x = *x * 10 + c - 48;
		c = getchar_unlocked();
	}
}

int main(void){
	int t;
	scanint(&t);
	while(t--){
		int n;
		scanint(&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanint(&arr[i]);
		}
		int l ,r,mid;
		r = n-1;
		l = 0;
		while(l<r){
			mid = (l+r)>>1;
			if(arr[mid] >= arr[mid-1] && arr[mid]>= arr[mid+1]){
				cout<<arr[mid]<<endl;
				break;
			}
			else if(arr[mid] < arr[mid-1]){
				r = mid-1;
			}
			else{
				l = mid+1;
			}
			//cout<<l<<" "<<r<<endl;
		}
	}

}