const max=100001;

var
	n:longint;
	i:longint;
	f:boolean;
	a,b:array[1..max] of longint;
	

begin
	readln(n);
	while(n<>0) do
	begin
		for i:=1 to n do
		begin
			read(a[i]);
			b[a[i]]:=i;
		end;
		
		f:=true;
		for i:=1 to n do
			if a[i]<>b[i] then
			begin
				f:=false;
				break;
			end;
		
		if f then
			writeln('ambiguous')
		else
			writeln('not ambiguous');
		
		readln(n);
	end;
end.
