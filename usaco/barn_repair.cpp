#include<iostream>
#include<algorithm>
using namespace std; 

const int cow_max=201;
int m,s,c;
int cow[cow_max],gap[cow_max];
int main(){
	cin>>m>>s>>c;
	for(int i=0;i<c;i++){
		cin>>cow[i];
	}
	//get input
	
	sort(cow,cow+c);
	for(int i=0;i<c;i++){
		gap[i]=cow[i+1]-cow[i]-1;
	}
	
	sort(gap,gap+c-1);
	
	
	
	
	
	int sum=0;
	for(int i=0;i<m-1;i++){     //这里要考虑m远大于c的情况
		sum+=gap[c-2-i];
	}
	
	int ans=s- sum - (cow[0]-1)-(s-cow[c-1]);
	cout<<ans;
	
}

/*
这一题要用贪心算法：
  每个牛棚有自己单独的一节木板来修理，所需要的木板总长度是最少的。但是木板的数量是有限的，因此，必须存在多个牛棚使用一个木板的情况。所以，当使用m块
  木板的时候，所需的木板总费用是最少的。但是如何选择这m块板子呢？
  换一个思维角度的话，当木板拦起来的牛棚是最少的，也就是木板之间，没有拦起来的牛棚数目是最多的。我们可以用这么一个贪心算法： 求出有牛的牛棚之间的空闲
  牛棚的数量，然后按照从大到小的序列进行排序。这里，我们不需要对第一个有牛的牛棚之前和最后一个有牛的牛棚之后的空牛棚进行统计，因为没有意义。
  完成了这一步之后，因为一共有m个木板，就要有m-1空的牛棚序列。这样子呢，我们就可以把空的牛棚序列从大到小，选择m-1,再加上两头的空牛棚序列，就是最大化
  的空牛棚啦。
  最小的花费就是牛棚总数减去上面的数。
  
*/
