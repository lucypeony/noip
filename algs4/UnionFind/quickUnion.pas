const max=10;

var
	a:array[1..max] of longint;
	i,x,y:longint;


{
	We avoid take actions until we have to 
}



{
	y points to x 
	a[y]:=x;
}
procedure union(x,y:longint);
begin
	a[y]:=x;
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
	
	union(1,5);
	union(5,9);
	writeln(find(1,9));
	writeln(find(2,3));
	

end.