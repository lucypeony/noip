var
        i,x:integer;
        a:array[1..10] of integer;

begin
	for i:=1 to 10 do
		a[i]:=i;
		
	x:=a[1];
	for i:=2 to 10 do
	begin
		a[i-1]:=a[i];
	end;
	a[10]:=x;
	
	
	for i:=1 to 10 do
		write(a[i]:3);
end.
