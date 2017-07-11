/*
	ID: lucypeo1
	TASK:pprime
	LANG:C++
*/

#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std; 

//global 
const int MAX_N=100000; 
int count=0;
int res[MAX_N];
long long  a,b;

bool prime(long long num){
	int half=sqrt(num)+1;
	for(int i=2;i<=half;i++){
		if(num%i==0)
			return false;
	}
	return true;
}

//generate panlindromes between a and b 
//then test every panlindrome to see if it is prime 
//if true ,add it to res[] 
void solve(){
	//generate panlindromes 
	//关于偶数长度的回文数： 11,以及所有偶数长度的回文数都是11的倍数，所以除了11之外都不是指数，因此，可以把11单独处理
	//针对奇数长度的回文数，因为b的值最大为100,000,000,所以，最大的奇数长度回文数也就是7位，而且回文数是对称的，所以我们可以只枚举一半
	
	if(a==5)
		res[count++]=5;
	
	if(b>=7 && a<=7)
	{
		res[count++]=7;
	 } 
	 
	if(a<=11 && b>=11){
		res[count++]=11;
	}
	
	
	int d1,d2,d3,d4;
	long long palindromes=0;
	
	//构建三位回文数
	for(d1=1;d1<=9;d1++){
		for(d2=0;d2<=9;d2++){
			//cout<<d1<<d2;
			palindromes=d1*100+d2*10+d1;
			if(prime(palindromes) && palindromes>=a && palindromes<=b)
				res[count++]=palindromes;
		}
	}
	
	//构建五位回文数
	for(d1=1;d1<=9;d1++){
		for(d2=0;d2<=9;d2++){
			for(d3=0;d3<=9;d3++){
				palindromes=d1*10000+d2*1000+d3*100+d2*10+d1;
				if(prime(palindromes) && palindromes>=a && palindromes<=b)
					res[count++]=palindromes;
			}
		}
	} 
	
	//构建七位回文数
	for(d1=1;d1<=9;d1++){
		for(d2=0;d2<=9;d2++){
			for(d3=0;d3<=9;d3++){
				for(d4=0;d4<=9;d4++){
					palindromes=d1*1000000+d2*100000+d3*10000+d4*1000+d3*100+d2*10+d1;
					if(prime(palindromes) && palindromes>=a && palindromes<=b)
						res[count++]=palindromes;
				}
			}
		}
	} 
	 
	
	 
	
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
