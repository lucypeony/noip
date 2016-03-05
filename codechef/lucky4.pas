var
	t,i,j,sum:longint;
	s:string;
begin 
	readln(t);
	for i:=1 to t do 
	begin 
		readln(s);
		sum:=0;
		for j:=1 to length(s) do 
			if (ord(s[j])-48)=4 then 
				inc(sum);
		writeln(sum);				
	end;
end.