var 
	digit:set of '0'..'9';
	cases,i,j,N0,N:longint;
	s:string;
begin 
	assign(input,'A-large-practice_counting_sheep.in');
	assign(output,'A-large-practice_counting_sheep.out');
	reset(input);
	rewrite(output);


	readln(cases);
	for i:=1 to cases do 
	begin 
		readln(N0);
		if N0=0 then 
			writeln('Case #',i,': ','INSOMNIA')
		else
		begin 
		digit:=['0'..'9'];
		N:=N0;
		repeat 
			str(N,s);
			for j:=1 to length(s) do 
				if s[j] in digit then 
					digit:=digit - [s[j]];
			N:=N+N0;
		until digit=[] ;
		writeln('Case #',i,': ',N-N0);
		end;
	end;

	close(input);
	close(output);
end.