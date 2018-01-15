#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int MaxSoFar = 1;
		int MaxEndingHere = arr[0];
		int MinEndingHere =arr[0];
		for(int i = 0;i<n;i++){
			if(arr[i] > 0){
				MaxEndingHere = MaxEndingHere * arr[i];
				MinEndingHere = MinEndingHere * arr[i];
			}
			else if(arr[i] == 0){
				MaxEndingHere = 1;
				MinEndingHere = 1;
			}
			else{
				int temp = MinEndingHere;
				MinEndingHere = MaxEndingHere * arr[i];
				MaxEndingHere = temp * arr[i];
			}
			MaxSoFar = max(MaxSoFar,MaxEndingHere);
		}
		cout<<MaxSoFar<<endl;
	}

	return 0;
}