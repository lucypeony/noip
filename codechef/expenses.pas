var
	t,x,y,i:longint;
	sum:real;

begin
	readln(t);
	for i:=1 to t do
	begin
		readln(x,y);
		if x >1000 then
			sum :=0.9 *x *y
		else
			sum:=x*y;
		writeln(sum:0:6);
	end;

end.
