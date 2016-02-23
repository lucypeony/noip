var
	n,i,j:integer;
	a:array[1..100,1..100] of integer;

begin

	//get input
	readln(n);
	for i:=1 to n do
		for j:=1 to i do
			read(a[i,j]);
			
	for i:=n-1 downto 1 do
		for j:=1 to i do
			if a[i+1,j]>a[i+1,j+1] then
				a[i,j]:=a[i,j]+a[i+1,j]
			else
				a[i,j]:=a[i,j]+a[i+1,j+1];
	
	writeln(a[1,1]);

end.
