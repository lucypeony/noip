 type myarray=array['0'..'9'] of longint;

var
	s:string;
	x,y:char;
	x1,y1:integer;
	i,m:longint;
	a:myarray;
	total:longint;
	c:char;
function combine(t1,t2:longint):longint;
var
	temp1,temp,i:longint;
begin
	temp:=1;
	for i:=t1 downto t2 do
	begin
		temp:= i * temp;
	end;
	
	temp1:=1;
	for i:=t2 downto 1 do
		temp1:=i*temp1;

	combine:=temp div temp1;
	writeln('in combine:',combine);
	
end;



function process(var s:string;var a:myarray;x,y :char):longint;
var
	i,k,j:longint;
	temp:longint;
begin
	if a[x]=0 then 
		exit(1);

	for i:=1 to a[x] do
	begin
		for j:=1 to i do
		begin
			for k:=1 to length(s) do
				if s[k]=x then
				begin
					dec(a[x]);
					s[k]:=y;
					inc(a[y]);
					temp:=combine(a[x],i)*process(s,a,x,y);
					total:=total + temp;
					writeln('in process:',total);
					break;
				end;
		end;
	
	end;
	exit(total);


end;




begin
	
	total:=0;
	
	for c:='0' to '9' do
		a[c]:=0;

	readln(s);
	for i:=1 to length(s) do
	begin
		inc(a[s[i]]);
		//write(a[s[i]]);
	end;
		
	readln(m);
	
	for i:=1 to m do
	begin
		readln(x1,y1);
		x:=chr(ord('0')+x1);
		y:=chr(ord('0')+y1);
		
		process(s,a,x,y);
	end;
	
	writeln(total);
	//writeln(combine(1,1));

end.
