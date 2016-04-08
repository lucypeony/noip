const
	MAX=11;
var
	map:array[1..MAX,1..MAX] of longint;
	
	temp,ta,tb,a,b:ansistring;
	i,j,t,k,k1,k2,M1,N,len,ma,mb:longint;
	f:boolean;
	j1,j2:longint;
	m:array[1..MAX] of string;

	
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
	
	
	
begin

	assign(input,'A-small-practice-1_bad_horse.in');
	assign(output,'A-small-practice-1_bad_horse.out');
	reset(input);
	rewrite(output);

	readln(N);
	for i:=1 to N do
	begin
		readln(M1);
		
		
		len:=0;
		
		//for j1:=1 to MAX do 
			//for j2:=1 to MAX do 
				//map[j1][j2]:=0;
				
		
		
		
		
		for j:=1 to M1 do
		begin
			readln(temp);
			getab(temp);
			if len=0 then
			begin
				inc(len);
				m[len]:=a;
				ma:=len;
				inc(len);
				m[len]:=b;
				mb:=len;
				map[ma][mb]:=1;
			end
			else
			begin
				f:=true;
				for k:=1 to len do
					if a=m[k] then
					begin
						f:=false;
						ma:=k;
						break;
					end;
				if f then
				begin
					inc(len);
					m[len]:=a;
					ma:=len;
				end;
				
				
				f:=true;
				for k:=1 to len do
					if b=m[k] then
					begin
						f:=false;
						mb:=k;
						break;
					end;
				if f then
				begin
					inc(len);
					m[len]:=b;
					mb:=len;
				end;
				
				map[ma][mb]:=1;
				
			end;
			
		end;
		f:=false;
		for k1:=1 to len do
			for k2:=k1 to len do
				if map[k1][k2]=0 then
				begin
					f:=true;
					break;
				end;
		//writeln(len);
		if f then
			writeln('Yes')
		else
			writeln('No');
				
	end;
	
	close(input);
	close(output);

end.
