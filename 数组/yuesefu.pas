const 
	max=100;
var
	a:array[1..max] of boolean;
	n,m,total,temp,i:integer;

begin 
	readln(n,m);
	total:=0;
	temp:=0;
	
	for i:=1 to n do 
		a[i]:=true;
		
	i:=1;
	
	while total<n do 
	begin 
		if a[i] then 
		begin 
			inc(temp);
			if temp>=m then 
			begin 
				a[i]:=false;
				temp:=0;
				write(i:4);
				inc(total);
			end;
		end;
		
		inc(i);
		if i>n then 
			i:=1;
	end;
	

end.