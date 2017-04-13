#include<iostream>


using namespace std; 

int main(){
	int n;
	cin>>n;
	char s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	char t[n];	
	
	int cur=0;
	
	int left=0,right=n-1;

	while(cur<n){
		
		if(left==right){
			t[cur]=s[right];
			cur++;
		}
		if(s[left]<s[right]){
			t[cur]=s[left];
			cur++;
			left++;
		}else if(s[left]>s[right]){
			t[cur]=s[right];
			cur++;
			right--;
		}else{
			
			int tleft=left;
			int tright=right;
			while(s[tleft]==s[tright] && tright-tleft>2){
				t[cur]=s[tright];
				cur++;
				tleft++;
				tright--;
			}
			
			if(tleft-tright>2){
				if(s[tleft+1]<s[tright-1])
					left=tleft;
				else
					right=tright;
			}else{
				right=tright;
			}
		}
		
		
	}
	
	
	for(int i=0;i<n;i++){
		cout<<t[i];
	}
	
	return 0;
}
