var
	t,i,j,len:longint;
	s:string;
    f:boolean;

begin
	readln(t);
	for i:=1 to t do
	begin
		readln(s);
		len:=length(s);
		f:=false;
		for j:=len downto 1 do
		begin
			if s[j]<>'0' then
				f:=true;
			//writeln(f);
			if (s[j]='0') and f  or (s[j]<>'0') then
				write(s[j]);
		end;
		writeln;
	end;
end.
