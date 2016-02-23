var
s:string;
i,len,shift,x:integer;
begin
	shift:=3;
	readln(s);
	len:=length(s);
	for i:=1 to len do
	begin
		if ((ord(s[i])>=ord('a')) and (ord(s[i])<=ord('z'))) then
			begin
				x:=ord(s[i])-ord('a');
				x:=x-shift;
				x:=(x + 26 )mod 26;
				s[i]:=chr(x+ ord('a'));
			end;
			
		if ((ord(s[i])>=ord('A')) and (ord(s[i])<=ord('Z'))) then 
		begin 
				x:=ord(s[i])-ord('A');
				x:=x-shift;
				x:=(x + 26 )mod 26;
				s[i]:=chr(x+ ord('A'));
		end;
	
	end;
	writeln(s);
end.
