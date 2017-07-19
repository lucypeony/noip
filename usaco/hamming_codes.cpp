/*
ID:lucypeo1
LANG:C++
TASK:hamming
*/
/*
这一题的重点是：理解题意。
血泪教训啊。
Ｎ个数字每一个相互之间都的ｈａｍｍｉｎｇ距离都必须大于等于Ｄ，开始我理解成了只是下一个对上一个
明白了真正的题目意思后，直接一个两重循环就搞定了。
输出有点费事，但是问题也不大
*/

#include<fstream>
#include<iostream>
using namespace std; 

const int MAX_N=65;
int N,B,D;//N codewords
			//Length B bits
			//at least Hamming distance of D 
int res[MAX_N];
int count=0;
int largest[9]={1,3,7,15,31,63,127,255,511};
			
int dis(int x,int y){
	int res=0;
	int z=x^y;
	//ÇózÀïÃæÓÐ¶àÉÙ¸ö1¾Í¿ÉÒÔ
	while(z>0){
		int t=z%2;
		z/=2;
		if(t)
			res++;
	} 
	
	return res;
}

void solve(){
	res[count]=0;
	
	int Lar=largest[B]; 
	
	
		
		//ÐÂµÄÊýÒª¶ÔÒÔÇ°ËùÓÐµÄres[]ÖÐµÄÊý¾Ýhamming¾àÀë¶¼´óÓÚµÈÓÚD
		//cerr<<Lar<<endl;
		//cerr<<"enter solve: for is starting: "<<endl; 
		for(int j=res[count]+1;j<Lar;j++){
			bool flag=true;
			//cerr<<"second for starting: "<<endl;
			for(int i=0;i<=count;i++)
			{
				if(dis(res[i],j)<D)
				{
					flag=false;
					
				}
			}
			//cerr<<"flag : "<<flag<<endl;
			if(flag){
				res[++count]=j;
				if(count>=N)
					break;
				//cerr<<j<<endl;
			}
				
			
		}//for
	
				
	
			
}

int main(){
	ifstream fin("hamming.in");
	fin>>N>>B>>D;
	fin.close();
	
	solve();
	
	ofstream fout("hamming.out");
	for(int i=1;i<=N-1;i++){
		if(i%10!=0)
			fout<<res[i-1]<<" ";
		else
		{
			fout<<res[i-1]<<endl;
		}
			
	}
	//fout<<endl<<count<<" "<<N<<endl;
	fout<<res[N-1]<<endl;
	fout.close();
}
