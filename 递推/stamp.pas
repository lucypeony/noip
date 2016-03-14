var
	m,n,i,j:integer;
	f:boolean;
	a,b:array[1..101] of integer;
begin
	readln(m,n);
	f:=false;
	for i:=1 to m do
	begin
		read(a[i]);
		if a[i]=1 then
			f:=true;
	end;
	
	if not f then
		writeln('max=0')
	else begin
		i:=1;b[i]:=1;
		repeat
			i:=i+1;
			for j:=1 to m do
				if (i mod a[j]=0) and (i div a[j]<b[i]) or (b[i]=0) then
					b[i]:=i div a[j];
			for j:=1 to trunc(i/2) do
				if (b[j]+b[i-j]<b[i]) then
					b[i]:=b[j]+b[i-j];
		until(b[i]>n) or (b[i]=0);
		write('max = ',i-1);
		
	end;
end.
