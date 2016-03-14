var
	a,n,m,x,i:longint;
	add,minus,total:array[1..1001] of longint;

begin
	readln(a,n,m,x);
	
		add[1]:=a;add[2]:=0;
		minus[2]:=0;
		total[1]:=a;
		total[2]:=a;
		for i:=3 to x do
                begin
			add[i]:=add[i-1]+add[i-2];
			minus[i]:=minus[i-1];
			total[i]:=total[i-1]+add[i]-minus[i];
		end;
		writeln(total[x]);	


end.
