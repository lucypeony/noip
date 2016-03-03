var 
	x:integer;
	y:real;

begin 
	readln(x,y);
	if x <y+0.5 then 
		if x mod 5 =0 then 
			y:=y -x -0.5;
		
	writeln(y:0:2);

end.