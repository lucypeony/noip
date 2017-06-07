#include<iostream>
using namespace std; 

const int max_n=351;
char necklace[max_n];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>necklace[i];
	}
	
	int max_len=-1;
	for(int i=1;i<=n-1;i++){		//从位置1开始，依次尝试断开
		//从necklace[i]开始向上查找连续相同的珠子数目 + 从necklace[i-1]开始往下找连续的珠子数目
		//把两者之和相加，每次for循环比较最大值。
		int j=i;
		int len1=0;
		while(necklace[j]==necklace[j+1] || necklace[j+1]=='w'){
			len1++;
			j++;
			if(j>n)
				j=1;
		}
		
		j=i-1;
		int len2=0;
		while(necklace[j]==necklace[j-1] || necklace[j-1]=='w'){
			len2++;
			j--;
			if(j<1)
				j=n;
		}
		
		if(len1+len2>max_len)
			max_len=len1+len2;
	}
	
	cout<<max_len;
}
/*
	1 2 3 4 5 

*/