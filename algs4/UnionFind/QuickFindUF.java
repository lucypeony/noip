public class QuickFindUF
{
	private int[] id;
	
	public QuickFindUF(int N)
	{
		id=new int[N];
		for (int i=0;i<N;i++)
			id[i]=i;
	}
	
	public boolean connected(int p,int q)
	{
		return id[p]==id[q];
	}
	
	public  void union(int p,int q)
	{
		int pid=id[p];
		int qid=id[q];
		for(int i=0;i<id.length;i++)
		{
			if (id[i]==qid)
				id[i]=pid;
		}
	}
	
	
	
	
	
	public static void main(String[] args){
		QuickFindUF qf=new QuickFindUF(10);
		qf.union(1,2);
		qf.union(2,9);
		qf.union(9, 7);
		System.out.println(qf.connected(1, 7));
		
		QuickUnion qu=new QuickUnion(10);
		qu.union(1,2);
		qu.union(2,9);
		qu.union(9, 3);
		System.out.println(qu.connected(1, 7));
	}
	
}