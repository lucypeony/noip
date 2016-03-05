var
	t,i,len,sum:longint;
        s:string;

begin
	readln(t);
	for i:=1 to t do
	begin
		readln(s);
		sum:=0;
		len:=length(s);
		sum:=ord(s[1])- 48 + ord(s[len]) - 48 ;
		writeln(sum);
	end;

end.
