var
	t,n,i,a:longint;

begin 
	readln(t);
	for i:=1 to t do 
	begin 
		readln(n);
		a:=1;
		while(n<>1) do 
		begin 
			n := n div 2 ;
			a := a * 2;
		end;
		writeln(a);
	end;


end.