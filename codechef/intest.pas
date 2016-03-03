var
	n,k,x,sum:longint;
        i:integer;


begin
	readln(n,k);
	sum:=0;
	for i:=1 to n do
	begin
		readln(x);
		if x mod k =0 then
			inc(sum);
	end;
	writeln(sum);
end.
