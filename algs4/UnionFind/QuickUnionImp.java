/*
 * This is implementation of Weighted Quick Union Class
 */
public class QuickUnionImp {
	private int id[];
	private int sz[];

	public QuickUnionImp(int i){
		id=new int[i];
		sz=new int[i];
		for(int j=0;j<i;j++){
			id[j]=j;
			sz[j]=0;
		}

	}



	/**
	 *
	 * @param p
	 * @param q
	 * link smaller tree to larger tree
	 */
	public void union(int p,int q){
		int tp=root(p);
		int tq=root(q);
		if(sz[tp]>=sz[tq]){
			id[tq]=tp;
			sz[tp]=sz[tp]+sz[tq]+1;
		}
		else{
			id[tp]=tq;
			sz[tq]=sz[tq]+sz[tp]+1;
		}

	}



	private int root(int p){

		int tp=id[p];

		while (tp!=p){
			p=tp;
			tp=id[p];
		}
		return  tp;
	}



	public boolean connected(int p,int q){
		return root(p)==root(q);
	}
}
