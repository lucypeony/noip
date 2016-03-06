var
	t,i,n,m,k,min:integer;
begin 
	readln(t);
	for i:=1 to t do 
	begin 
		readln(n,m,k);
		min:=n-m;
		if abs(min)<=k then 
			writeln(0)
		else
			writeln(abs(min)-k);
	
	end;

end.