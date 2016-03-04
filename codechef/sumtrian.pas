 const max=101;

var
	t,i,line,j,k:integer;
	a:array[1..max,1..max] of integer;

begin
	readln(t);
	for i:=1 to t do
	begin
		readln(line);
		for j:=1 to line do
		begin
			for k:=1 to j do
				read(a[j,k]);
			readln;
		end;
		
		
		for j:=line downto 2 do
		begin
			for k:=1 to j-1 do
			begin
				if a[j,k] > a[j,k+1] then
					a[j-1,k]:=a[j-1,k] + a[j,k]
				else
					a[j-1,k]:=a[j-1,k] + a[j,k+1];
			end;
		
		end;// end of (for )
		
		writeln(a[1,1]);
	end;

end.
