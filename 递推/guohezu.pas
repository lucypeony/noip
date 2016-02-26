var
	n,m,x,y:integer;
	f:array[0..50,0..50] of int64;
	i,j:integer;
	g:array[0..50,0..50] of boolean;
	gx:array[1..4] of integer;
	gy:array[1..4] of integer;


begin 
	readln(n,m);
	readln(x,y);
	
	for i:=1 to n do 
		for j:=1 to m do 
		begin 
			g[i,j]:=true;
		end;
	
	gx[1]:=-2;gx[2]:=-1;gx[3]:=1;gx[4]:=2;
	//gx[1..4]:={-2,-1,1,2};
	
	gy[1]:=-2;gy[2]:=-1;gy[3]:=1;gy[4]:=2;
	//gy[1..4]:={-2,-1,1,2};
	for i:=1 to 4 do 
		for j:=1 to 4 do 
			if abs(gx[i])=abs(gy[j]) then 
				g[x+gx[i],y+gy[i]] :=false;

	f[0,0]:=1;
	for i:=1 to n do 
		for j:=1 to m do 
		begin 
			if g[i,j] then 
			begin 
				f[i,0]:=f[i-1,0];
				f[0,j]:=f[0,j-1];
				f[i,j]:=f[i-1,j]+f[i,j-1];
			end
			else
				f[i,j]:=0;
		end;
	
	writeln(f[n,m]);	
	

end.