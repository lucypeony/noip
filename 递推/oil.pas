var
	i,k:integer;
        m,n:integer;
	way,oil:array[1..1000] of real;

begin
        assign(output,'test.out');
        rewrite(output);
        readln(m,n);
	k:=1;
	way[k]:=n;
	oil[k]:=n;
	
	repeat
		k:=k+1;
		way[k]:=n/(2*k-1) +way[k-1];
		oil[k]:=n*k;
	until way[k]>=m;

	for i:=k-1  downto 1 do
		writeln(k-i,'  ',m-way[i]:0:10,'   ',oil[i]:0:10);
        close(output);
end.
