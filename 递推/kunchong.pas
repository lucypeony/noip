var
	i,x,y,z:integer;
	a,b:array[0..101] of int64;

begin
	readln(x,y,z);

	for i:=1 to x do
	begin
		a[i]:=1;
		b[i]:=0;
	end;
	
	for i:=x+1 to z+1 do
	begin
		b[i]:=y*a[i-x];
		a[i]:=a[i-1]+b[i-2];
	end;
	
	writeln(a[z+1]);

end.
