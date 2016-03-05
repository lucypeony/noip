var
	t,i,a,b:longint;

begin 
	readln(t);
	for i:=1 to t do 
	begin 
		readln(a,b);
		writeln(a mod b);
	end;

end.