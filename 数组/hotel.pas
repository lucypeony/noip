var
	i,j:integer;
	a:array[1..100] of integer;

begin 
	for i:=1 to 100 do 
		a[i]:=-1;

	for i:=1 to 100 do 
	begin
		for j:=1 to 100 do 
			if i mod j =0 then 
				a[i]:=-a[i];	
	end;

	for i:=1 to 100 do 
		if a[i]=1 then 
			writeln(i);
end.