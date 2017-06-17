/*
ID:lucypeo1
LANG:C++
TASK:namenum
*/
/*
一方面是文件的读写，使用fstream其实非常方便；
另一方面是这个题目，如果对读入的数字进行处理，分析这个数字能够产生多少字母组合，再去搜索每个字母组合是否存在，非常麻烦；
因为文件的字母组合是确定的，因此可以对每个已有的字母组合分析其对应的数字，再去输出所有的符合输入的数字的字母组合就可以
*/

#include<iostream>
//#include<cstdio>
#include<fstream>
#include<vector>
using namespace std;


string getNum(string s){
	int len=s.length();
	string res="";
	for(int i=0;i<len;i++){
		switch(s[i]){
			case 'A':
			case 'B':
			case 'C':
				res+='2';
				break;
			case 'D':
			case 'E':
			case 'F':
				res+='3';
				break;
			case 'G':
			case 'H':
			case 'I':
				res+='4';
				break;
			case 'J':
			case 'K':
			case 'L':
				res+='5';
				break;
			case 'M':
			case 'N':
			case 'O':
				res+='6';
				break;
			case 'P':
			case 'R':
			case 'S':
				res+='7';
				break;
			case 'T':
			case 'U':
			case 'V':
				res+='8';
				break;
			case 'W':
			case 'X':
			case 'Y':
				res+='9';
				break;
			case 'Q':
			case 'Z':
				return "";
		}
	}//for
	return res;
}//getNum


int main(){
	ifstream fin("namenum.in");
	ifstream fdict("dict.txt");
	ofstream fout("namenum.out");
	
	
	string s;
	vector<string> dict;
	while(fdict>>s){
		dict.push_back(s);
	}
	
	
	
	string my_str;fin>>my_str;
	int count=0;
	for(int i=0;i<dict.size();i++){
		string my_temp=getNum(dict[i]);
		//fout<<my_temp<<" ";
		if(my_temp!="" && my_str==my_temp ){
			
			count++;
			fout<<dict[i]<<endl;
		}
		
	}
	
	if(count==0)
		fout<<"NONE\n";
	fin.close();
	fdict.close();
	fout.close();
	return 0;
}
