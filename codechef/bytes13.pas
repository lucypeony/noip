const size=100001;
	max=32;
var
	a:array[1..size] of longint;
    b:array[1..size] of boolean;
	i,n,q,bp,ep,num,temp,first:longint;
	m:set of 1..max;

	
procedure query(bp,ep:longint);
var 
	count:longint;
	i:longint;
begin
	count:=0;
	for i:=bp to ep do 
		if b[i] then 
			inc(count);
	
	writeln(count);
end;

procedure change(bp,ep,num:longint);
var i:longint;

begin
	for i:=bp to ep do 
	begin
		a[i]:=num;
		if a[i] in m then 
			b[i]:=true
		else
			b[i]:=false;
	end;
end;	


begin

	//initialize the m set 
	m:=[1];
	temp:=1;
	for i:=1 to 32 do
	begin
		temp:=temp*2;
		m:=m+[temp];
	end;

	readln(n,q);
	for i:=0 to n-1 do
	begin
		read(a[i]);
		if a[i] in m then
			b[i]:=true;
	end;
	
	{ this is  a test 
	writeln;
	for i:=0 to n-1 do
		if b[i] then
			write(a[i]);
		
	readln;
	}
	
	for i:=1 to q do
	begin
		read(first);
		if first=1 then
		begin
			readln(bp,ep);
			query(bp,ep);
		end
		else
		begin
			readln(bp,ep,num);
			change(bp,ep,num);
		end;
	
	end;

end.
