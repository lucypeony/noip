#include<iostream>
using namespace std; 

int len;
const int max_len=351;
char necklace[max_len];

int mod(int n,int m){
	if(n<0)
		n+=m;
	return n%m;
}

int bk(int bp,int direction){
	char last_color='w';
	int i;
	if(direction>0)
		i=bp;
	else
		i=mod(bp-1,len);
		
	int j;
	
	for(j=0;j<len;j++,i=mod(i+direction,len)){
		
		if(last_color=='w' && necklace[i]!='w')
			last_color=necklace[i];
		
		if(last_color!='w' && necklace[i]!='w' && last_color!=necklace[i])
			break;
		
	}
	return j;
}


int main(){
	cin>>len;
	for(int i=0;i<len;i++){
		cin>>necklace[i];
	}//get input 
	
	//break the necklace from every position 
	int res=1;
	for(int i=0;i<len;i++){
		int temp=bk(i,1)+bk(i,-1);
		if(temp>res)
			res=temp;
	}
	
	if(res>len)
		res=len;
		
	cout<<res;
	
}

/*
29 
wwwbbrwrbrbrrbrbrwrwwrbwrwrrb 
*/
