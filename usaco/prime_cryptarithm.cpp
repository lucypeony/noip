/*
ID:lucypeo1
LANG:C++
TASK:crypt1
*/
#include<iostream>
#include<fstream> 
#include<algorithm>
#include<vector>

#define fin cin
#define fout cout

using namespace std;

int num;
vector<int> digits;

bool indigits(int i){
	vector<int>::iterator found;
	found=find(digits.begin(),digits.end(),i);
	//cerr<<i<<"  "<<(found==digits.end())<<" ||";
	return (found!=digits.end());
}

bool sol(int first,int second){
	int f1=first%10;int f2=(first/10)%10;int f3=first/100;
	int s1=second%10;int s2=second/10;
	if(!indigits(f1) || !indigits(f2)||!indigits(f3) || !indigits(s1)||!indigits(s2))
		return false;
	
	int a=first * s1;
	int a1=a%10;int a2=(a/10)%10;int a3=a/100;
	if(!indigits(a1) ||!indigits(a2)||!indigits(a3))
		return false;
		
	int b=first*s2;
	int b1=b%10;int b2=(b/10)%10;int b3=b/100;
	if(!indigits(b1)||!indigits(b2)||!indigits(b3))
		return false;
		
	int c=first*second;
	int c1=c%10;int c2=(c/10)%10;int c3=(c/100)%10;int c4=c/1000;
	if(!indigits(c1)||!indigits(c2)||!indigits(c3)||!indigits(c4))
		return false;
	
	/*
	cout<<"    "<<f3<<f2<<f1<<endl;
	cout<<"       "<<s2<<s1<<endl;
	cout<<"   "<<a3<<a2<<a1<<endl;
	cout<<"  "<<b3<<b2<<b1<<endl;
	cout<<" "<<c4<<c3<<c2<<c1<<endl;
	cout<<"-----------------------------------"<<endl;
	*/
	return true;
}

int  solve(){
	int count =0;
	
	for(int first=100;first<=999;first++){
		for(int second=10;second<=99;second++){
			if(sol(first,second))
				count++;
		}
	}
	
	return count;
}


int main(){
	//input 
	ifstream fin("crypt1.in");
	ofstream fout("crypt1.out");
	
	cin>>num;
	for(int i=0;i<num;i++){
		int temp;
		cin>>temp;
		digits.push_back(temp);
	}
	
	//cerr<<digits.size();
	cout<<solve()<<endl;
	
	
	fin.close();
	fout.close();
	return 0;
}
