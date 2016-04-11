var 
	s:string;
	i,k:integer;
	cases,count:integer;

procedure reverse(var s:string;bp,ep:integer);
var 
	i:integer;
begin
	for i:=bp to ep do 
		if s[i]='+' then 
			s[i]:='-'
		else 
			s[i]:='+';
			
end;



begin 
	
	assign(input,'B-large-practice_revenge_pancakes.in');
	assign(output,'B-large-practice_revenge_pancakes.out');
	reset(input);
	rewrite(output);
	
	readln(cases);
	for i:=1 to cases do 
	begin 
		readln(s);
		count:=0;
		for k:=length(s) downto 1 do 
			if s[k]='-' then 
			begin
				reverse(s,1,k);
				inc(count);
			end;
		writeln('Case #',i,': ',count);		
	
	end;

	close(input);
	close(output);
end.