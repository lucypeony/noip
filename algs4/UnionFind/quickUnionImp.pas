const max=10;

var
	a,t:array[1..max] of longint;
	i,x,y:longint;

{
	Important !!!
	README
	To avoid tall trees :
		1. To keep track of all tree sizes
		2. To avoid tall trees , link smaller tree to the root of larger tree
		
		
	The most height is lg(N)
	(N is the total number of nodes)
}


{
	y points to x
	a[y]:=x;
}
procedure union(x,y:longint);
var
        tx,ty:longint;
begin
	//find root of x,y
		tx:=a[x];
		ty:=a[y];
		while not ((tx=x) and (ty=y)) do
		begin
			x:=tx;
			y:=ty;
			tx:=a[x];
			ty:=a[y];
		end;
		
		
	{
		if x tree size bigger the y tree ,
		link y
	}
	if t[x]>=t[y] then
	begin
		a[y]:=x;
		t[x]:=t[x]+t[y];
		if t[y]=0 then 
			inc(t[x]);
	end
	else
	begin
		a[x]:=y;
		t[y]:=t[y]+t[x];
		//not inlcude x node 
	end;
		
end;


function find(x,y:longint):boolean;
var
	tx,ty:longint;
begin
	tx:=a[x];
	ty:=a[y];
	while not ((tx=x) and (ty=y)) do
	begin
		x:=tx;
		y:=ty;
		tx:=a[x];
		ty:=a[y];
	end;
	if a[x]=a[y] then
		exit(true)
	else
		exit(false);
end;


begin 	
	for i:=1 to max do
		a[i]:=i;
		
	for i:=1 to max do
		t[i]:=0;
	
	union(1,5);
	union(5,9);
	
	union(2,4);
	union(1,2);
	writeln(find(1,9));
	writeln(find(2,3));
	for i:=1 to max do
		write(t[i]);
		

end.
