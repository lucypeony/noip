/*
ID:lucypeo1
LANG:C++
TASK:skidesign
*/
/*
因为数据范围很小，所以，我们可以枚举每个最低+最高值，分别计算哪一个所需的工作最小
*/
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std; 

const int MAX_N=1001;
int N;
int a[MAX_N];

int solve(){
	int ans=1000000001;
	for(int lowest=0;lowest<=100;lowest++){
		int highest=lowest+17;
		int temp=0;
		for(int i=0;i<N;i++){
			if(a[i]<lowest)
				temp+=(lowest-a[i])*(lowest-a[i]);
			if(a[i]>highest)
				temp+=(a[i]-highest)*(a[i]-highest);
		}
		if(temp<ans)
			ans=temp;
	}
	return ans;
	
}

int main(){
	ifstream fin("skidesign.in");
	fin>>N;
	for(int i=0;i<N;i++)
		fin>>a[i];
	fin.close();
	
	ofstream fout("skidesign.out");
	fout<<solve()<<endl;
	fout.close();
	return 0;
}
