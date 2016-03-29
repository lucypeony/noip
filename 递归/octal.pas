var
	a:array[0..100] of longint;
	n,i,r:longint;

begin
	readln(n);
	i:=0;
	repeat
		r:=n mod 8 ;
		inc(i);
		a[i]:=r;
		n:=n div 8;
	
	until n=0;
	for r:=i downto 1 do
		write(a[r]);
end.
