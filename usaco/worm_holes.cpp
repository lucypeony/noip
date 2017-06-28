/*
ID:lucypeo1
LANG:C++
TASK:wormhole
*/
/*
这一题根据题目，对于所有的虫洞，进行两两配对。使用递归进行配对。对于N个虫洞的配对，
会产生不同的配对方式。存储在partner[i]里面。partner[i]=j，表明i，j两个虫洞是一对。
partner[1..N]的一套值就是一个配对方案。
然后对每一个配对方案进行判断，看看能不能产生“环路”，因为母牛只能从左向右水平移动，
所以使用一个next_on_right[]数组来记录每个虫洞水平最邻近的虫洞。判断的时候，对于每个
虫洞，循环判断它的最邻近的右边的虫洞是不是存在，如果存在的话，那么这个虫洞就是有“环路”的，
就符合题意。
*/

#include<iostream>
#include<fstream>
#define MAX_N 12

using namespace std; 
int N,X[MAX_N+1],Y[MAX_N+1];
int partner[MAX_N+1];
int next_on_right[MAX_N+1];

bool circle(){
	for(int i=1;i<=N;i++){
		int pos=i;
		for(int j=1;j<=N;j++)
			pos=next_on_right[partner[pos]];
		if(pos!=0)
			return true;
	}
	return false;
}

int solve(){
	int total=0;
	int i;
	for(i=1;i<=N;i++)
		if(partner[i]==0)
			break;
	
	if(i>N)
		if(circle())
			return 1;
		else return 0;
	
	for(int j=i+1;j<=N;j++)
	{
		if(partner[j]==0)
		{
			partner[j]=i;
			partner[i]=j;
			total+=solve();
			partner[j]=0;
			partner[i]=0;
		}
	}
	return total;	
}


int main(){
	ifstream fin("wormhole.in");
	fin>>N;
	for(int i=1;i<=N;i++)
		fin>>X[i]>>Y[i];
	fin.close();
	
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
			if(X[j]>X[i] && Y[i]==Y[j])
				if(next_on_right[i]==0 || X[j]-X[i]<X[next_on_right[i]]-X[i])
					next_on_right[i]=j;
	
	
	
	ofstream fout("wormhole.out");
	fout<<solve()<<endl;
	fout.close();
	return 0;
}
