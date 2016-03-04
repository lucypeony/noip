var
	t,i,n:longint;

begin
	readln(t);
	for i:=1 to t do
	begin
		readln(n);
		if (n mod (n div 2 + 1) =0 )then
			writeln(n)
		else
			writeln (n- (n mod (n div 2 + 1)));
	
	end;

end.
