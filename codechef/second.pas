var
	t,i,a,b,c,x:longint;
begin 
	readln(t);
	for i:=1 to t do 
	begin 
		readln(a,b,c);
		if (a>=b) and(a<=c) or (a>=c) and (a<=b) then 
			x:=a;
		if (b>=a) and (b<=c) or (b>=c) and (b<=a) then 
			x:=b;
		if (c>=a) and (c<=b) or (c>=b) and (c<=a) then 
			x:=c;
		writeln(x);
	
	end;

end.