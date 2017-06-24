/*
ID:lucypeo1
LANG:C++
TASK:combo 
*/
#include<iostream>
#include<fstream>

using namespace std; 

const int N=102;

int n;
struct node{
	int x;
	int y;
	int z;
}farmer,master;


int  solve(){
	bool a[N][N][N];
	for(int i=farmer.x-2;i<=farmer.x+2;i++)
		for(int j=farmer.y-2;j<=farmer.y+2;j++)
			for(int k=farmer.z-2;k<=farmer.z+2;k++)
			{	
				int i1=(n+i)%n;
				int j1=(n+j)%n;
				int k1=(n+k)%n;
				if(!a[i1][j1][k1]){
					a[i1][j1][k1]=true;
				}
			}//for
	
	for(int i=master.x-2;i<=master.x+2;i++)
		for(int j=master.y-2;j<=master.y+2;j++)
			for(int k=master.z-2;k<=master.z+2;k++)
			{
				int i1=(n+i)%n;
				int j1=(n+j)%n;
				int k1=(n+k)%n;
				if(!a[i1][j1][k1]){
					a[i1][j1][k1]=true;
				}
			}//for
	
	int ans=0;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
			for(int k=0;k<=n;k++)
				if(a[i][j][k]){
					ans++;
					//cout<<i<<" "<<j<<" "<<k<<endl;
				}
					
	return ans;
}


int main(){
	ifstream fin("combo.in");
	ofstream fout("combo.out");
	
	fin>>n;
	fin>>farmer.x>>farmer.y>>farmer.z;
	fin>>master.x>>master.y>>master.z;
	
	fout<<solve()<<endl;
	
	fin.close();
	fout.close();
	return 0;
}
