var
	 i:longint;
	 cases:integer;
	 a,K:qword;


{
	f(K)=1-f(2*2^m -K)
}


function rec(K:qword):longint;
begin
	if ( (K and(K-1)=0)) then
		exit(0);
	
	
	a:=1;
	while(a<K)do
		a:=a*2;
	rec:=1-rec(a-K);
end;


procedure solve(i:longint);
begin
	readln(K);
	writeln('Case #',i,': ',rec(K));
end;



begin
	assign(input,'A-large-practice_googol.in');
	reset(input);
	assign(output,'A-large-practice_googol.out');
	rewrite(output);
	
	readln(cases);
	for i:=1 to cases do
		solve(i);
		
	close(input);
	close(output);
end.
