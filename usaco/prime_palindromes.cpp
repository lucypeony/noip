#include<iostream>
#include<fstream>
#include<string>
using namespace std; 

//global 
const int MAX_N=100000; 
int count=0;
int res[MAX_N];
long long  a,b;

//generate panlindromes between a and b 
//then test every panlindrome to see if it is prime 
//if true ,add it to res[] 
void solve(){
	//generate panlindromes 
	string sa=to_string(a);
	string sb=to_string(b);
	int len_a=sa.length();
	int len_b=sb.length();
	//using loops ,因为b的范围有限，而且产生回文数的时候，要分成对半，所以最多用到4层循环。 
}

int main(){
	ifstream fin("pprime.in");
	fin>>a>>b;
	fin.close();
	
	solve();
	
	ofstream fout("pprime.out");
	for(int i=0;i<count;i++)
		fout<<res[i]<<endl;
	fout.close();
	
	return 0;	

}
