var
	k,k1,n,a:longint;
begin
	readln(k);
	for k1:=1 to k do
	begin
		//readln(n);
                n:=k1;
		a:=1;
		while n>a do
		begin
			dec(n,a);
			inc(a);
		end;
		n:=n mod 9;
		if n=0 then
			n:=9;
                write(n);
		//dec(k);
	end;


end.
