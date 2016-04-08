//Reverse Words
const 
	stack_length=1000;
var
	s:ansistring;
	stack:array[1..stack_length] of char;
	top:integer;
	len,i,N:longint;
	
	
function empty():boolean;
begin 
	if top=0 then 
		empty:=true
	else 
		empty:=false;
end;
	
	
procedure push(c:char);
begin 
	if top=stack_length then 
		writeln('Error!')
	else
	begin
		inc(top);
		stack[top]:=c;
	end;

end;

function pop():char;
begin 
	if empty() then 
		writeln('Error!')
	else 
	begin 
		pop:=stack[top];
		dec(top);
	end;

end;



procedure solve(s:ansistring);
var 
	i:longint;
begin 
	len:=length(s);
	for i:=len downto 1 do 
		if s[i]<>' 'then 
			push(s[i])
		else
		begin
			while not empty() do 
			begin
				write(pop());
			end;
			write(' ');
		end;
	
	while not empty() do 
			begin
				write(pop());
			end;
	
	writeln;
end;
	
	
	
	
begin
 
	assign(input,'B-large-practice_reverse_words.in');
	assign(output,'B-large-practice_reverse_words.out');
	reset(input);
	rewrite(output);

	readln(N);
	for i:=1 to N do 
	begin
		top:=0;
		readln(s);
		write('Case #',i,': ');
		solve(s);
	end;
	
	
	close(input);
	close(output);
end.