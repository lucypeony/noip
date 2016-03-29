const max=10;
var
	a:array[0..max] of longint;

        i,x,y:longint;
		c:char;

function query(x,y:longint):boolean ;
{
	if x,y are connected , return true;
		else
			return false;
}
begin
	if a[x]=a[y] then
		exit(true)
	else	
		exit(false);
	
end;

procedure union(x,y:longint);
{
	a[x]=:a[y];
}
begin
	for i:=1 to max do
		if a[i]=a[y] then
			a[i]:=a[x];

end;


procedure info();
begin 
	writeln('--------------------------');
	writeln('---I--N--F--O-------------');
	writeln('--To union x,y--,enter u x y--');
	writeln('--To query x,y,enter q x y--');
	writeln('--To show this help,enter h--');
	writeln('------------------');

end;


begin
	//init
	for i:=0 to max do
		a[i]:=i;

	union(0,5);
	union(5,6);
	union(1,2);
	union(2,7);
	union(3,8);
	union(3,4);
	union(4,9);

	info();
	
	while not eof do 
	begin 
		readln(c,x,y);
		case c of 
			'u': union(x,y);
			'q': writeln(x,'  ',y,'  ',query(x,y));
			'h':info();
		end;
	end;
		
	
end.
