var
	t,t1,a,b:longint;
	

function gcd(a,b:longint):longint;
var
	r:longint;
begin
	r:=b mod a;
	while(r<>0) do 
	begin 
		b:=a;
		a:=r;
		r:=b mod a;
	end;
	gcd:=a;

end;

function lcm(a,b:longint):longint;
var
	x,i:longint;
begin
	if a=b then
		exit(a);
	
	x:=0;
	repeat
		x:=x+a;
	until x mod b=0 ;
	lcm:=x;
end;

begin
	readln(t);
	for t1:=1 to t do
	begin
		readln(a,b);
		writeln(gcd(a,b),' ',lcm(a,b));
	
	end;

end.
