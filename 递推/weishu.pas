var
  n,i,x:longint;
  f:array[1..1001,0..2] of longint;

begin
  readln(n);
  f[1,1]:=1;
  f[1,0]:=8;
  for i:=2 to n do 
  begin 
	f[i,0]:=(f[i-1,0]*9 + f[i-1,1]) mod 12345;
	f[i,1]:=(f[i-1,1]*9 + f[i-1,0]) mod 12345;
  end;
  
  writeln(f[n,0]);

end.
