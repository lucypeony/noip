var
	i,k:integer;
	way,oil:array[1..1000] of real;

begin 
	k:=1;
	way[k]:=500;
	oil[k]:=500;
	
	repeat 
		k:=k+1;
		way[k]:=500/(2*k-1) +way[k-1];
		oil[k]:=500*k;
	until way[k]>=1000;

	for i:=k-1  downto 1 do 
		writeln(k-i,'  ',1000-way[i]:0:10,'   ',oil[i]:0:10);
end.