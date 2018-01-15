#include <bits/stdc++.h>
using namespace std;

struct meanHeapNode{
	char data;

	int freq;
	meanHeapNode *left ,*right;
	meanHeapNode(char data,int freq){
		this->data = data;
		this->freq = freq;
		left=right=NULL;
	}

};
struct compare {

	bool operator()(meanHeapNode* l, meanHeapNode* r)

	{
		return (l->freq > r->freq);
	}
};
void printcode(meanHeapNode *root,string str){
	if(root==NULL){
		return ;
	}
	if(root->data!='$'){
		cout<<str<<" ";
	}
	printcode(root->left,str+"0");
	printcode(root->right,str+"1");
}
void huffmanCode(string s,int arr[],int n){
	meanHeapNode *left,*right,*top;
	priority_queue<meanHeapNode *,vector<meanHeapNode * > , compare > minheap;
	for(int i = 0;i<n;i++){
		minheap.push(new meanHeapNode(s[i],arr[i]));
	}
	while(minheap.size()!=1){
		left = minheap.top();
		minheap.pop();
		right = minheap.top();
		minheap.pop();
		top = new meanHeapNode('$',left->freq+right->freq);
		top->left = left;
		top->right = right;
		minheap.push(top);
	}
	printcode(minheap.top(),"");

}
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		huffmanCode(s,arr,n);
	}

	return 0;
}