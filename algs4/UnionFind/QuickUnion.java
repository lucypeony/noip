
public class QuickUnion {
	private int id[];
	public QuickUnion(int i){
		id=new int[i];
		for(int j=0;j<i;j++)
			id[j]=j;
	}
	
	
	public void union(int p,int q){
		id[q]=p;
	}
	
	public boolean connected(int p,int q){
		int tp,tq;
		tp=id[p];
		tq=id[q];
		while ((tp!=p) || (tq!=q)){
			p=tp;
			q=tq;
			tp=id[p];
			tq=id[q];
		}
		
		return id[p]==id[q];
	}
}
