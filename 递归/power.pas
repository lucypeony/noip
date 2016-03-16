const max=16;

var
	n,i:longint;
	a:array[0..16] of longint;



procedure process(n:longint);
begin
	if n=0 then 
		exit;
	if n=2 then
	begin
		write(n);
		exit;
	end;
	if n=1 then
	begin
		write('2(0)');
		exit;
	end;
	
	for i:=max downto 0 do
	begin
		if a[i]<=n then
			break;
	end;
	
	n:=n-a[i];
	
	if i=1 then 
		write(a[i],'+')
	else if i=0 then 
		write('2(0)')
	else
		begin
		write('2(');
		process(i);
		write(')');
		if n<>0 then 
			write('+');
		end;
	
	process(n);

end;



begin

	readln(n);
	a[0]:=1;
	for i:=1 to max do
		a[i]:=2*a[i-1];
	process(n);

end.
