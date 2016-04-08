var


procedure getab(temp:string);
var
	i,j:longint;
begin
	for i:=1 to length(temp) do
		if temp[i]<>' ' then
			a[i]:=temp[i]
		else
			break;
	
	inc(i);
	for j:=i to length(temp) do
		b[j-i+1]:=temp[j];
end;



procedure init();
var 
	i,j:longint;
begin 
	for i:=1 to max do 
		for j:=1 to MAX do 
			map[i][j]:=0;
	len:=0;
end;

procedure setMap(a,b);
begin 
	

end;


begin
	readln(N);
	for i:=1 to N do 
	begin 
		init();
		readln(M);
		for j:=1 to M do 
		begin 
			readln(s);
			getab(s);
			
		
		end;
	end;


end.