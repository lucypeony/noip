var
	t,sum,i,j,len:longint;
	s:string;

begin
	readln(t);
	for i:=1 to t do
	begin
		readln(s);
		sum:=0;
		len:=length(s);
		for j:=1 to len do
			sum:=sum + ord(s[j]) - 48 ;
		
		writeln(sum);
	end;
end.
