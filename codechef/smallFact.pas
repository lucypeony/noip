var
	i,j,t,n:integer;
	sum:int64;
begin
	readln(t);
	for i:=1 to t do
	begin
		readln(n);
		sum:=1;
		for j:=1 to n do
			sum :=sum * j;
		writeln(sum);
	end;
end.
