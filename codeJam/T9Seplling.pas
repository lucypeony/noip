var
	s:ansistring;
	i,N:longint;
	id:array['a'..'z'] of string;

procedure solve(s:ansistring);
var 
	i:longint;
begin	
	if s[1]=' ' then 
		write('0')
	else
		write(id[s[1]]);
	
	for i:=2 to length(s) do 
	begin 
		if s[i]=' ' then 
		begin
			if s[i]=s[i-1] then 
				write(' ');
			write('0');
		end
		else
		begin
			if s[i-1]<>' ' then 	
				if id[s[i]][1]=id[s[i-1]][1] then 
				write(' ');
			
			write(id[s[i]]);
		end;
	end;
end;


begin 

	//init
	id['a']:='2';
	id['b']:='22';
	id['c']:='222';
	id['d']:='3';
	id['e']:='33';
	id['f']:='333';
	id['g']:='4';
	id['h']:='44';
	id['i']:='444';
	id['j']:='5';
	id['k']:='55';
	id['l']:='555';
	id['m']:='6';
	id['n']:='66';
	id['o']:='666';
	id['p']:='7';
	id['q']:='77';
	id['r']:='777';
	id['s']:='7777';
	id['t']:='8';
	id['u']:='88';
	id['v']:='888';
	id['w']:='9';
	id['x']:='99';
	id['y']:='999';
	id['z']:='9999';
	

	assign(input,'C-large-practice_t9.in');
	assign(output,'C-large-practice_t9.out');
	reset(input);
	rewrite(output);
	
	readln(N);
	for i:=1 to N do 
	begin 
		readln(s);
		write('Case #',i,': ');
		solve(s);
		writeln;
		
	end;

	
	close(input);
	close(output);
end.