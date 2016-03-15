const 
	max=1000011;
var
	t,t1,i,j,n,min1,min2:longint;
	a:array[1..100011] of longint;

begin 
	readln(t);
	for t1:=1 to t do 
	begin 
		readln(n);
		min1:=max;
		min2:=max;
		j:=0;
		for i:=1 to n do 
		begin 
			read(a[i]);
			if min1>a[i] then 
				min1:=a[i];
		end;
		readln;
		
		for i:=1 to n do 
		begin 
			if a[i]=min1 then 
			begin 
				a[i]:=max;
			end;
			if a[i]<min2 then 
				min2:=a[i];
		end;
		
		if min2=max then 
			min2:=min1;
				
		writeln(min1+min2);
	end;

end.