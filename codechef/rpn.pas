const
	stacksize=401;
var
	stack:array[1..stacksize] of char;
        temp:char;
	s:ansistring;
	top:integer;
	t,i,j,len:integer;
	
procedure push(c:char);
begin
	if top>=stacksize then
		writeln('Error! Full Stack!')
	else
	begin
		inc(top);
		stack[top]:=c;
	end;
end;

function pop():char;
begin
	if top=0 then
		writeln('Error!Empty Stack!')
	else
	begin
		pop:=stack[top];
		dec(top);
	end;
end;
	
	
begin
	//init stack
	top:=0;

	readln(t);
	for i:=1 to t do
	begin
		readln(s);
		len:=length(s);
		for j:=1 to len do
		begin
			case s[j] of
				'a'..'z': write(s[j]);
				'+','-','*','/','^','(':push(s[j]);
				')':begin
						temp:=pop();
						while(temp<>'(') do
						begin
							write(temp);
							temp:=pop();
						end;
					end;
			end;
		end;
		writeln;
	end;

end.
