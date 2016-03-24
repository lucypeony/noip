var
	T,t1,h,w,i:longint;
	sum:real;
begin
	readln(T);
	for t1:=0 to T-1 do
	begin
		readln(h,w);
		sum:=w*w*(h-1);
		for i:=1 to w-h do
		begin
			sum:=sum+2*(w-i-1)*(w-i-h+1);
		end;
		//writeln(sum:0:4);
		sum:=sum/(w*w);
		writeln(sum:0:6);
	
	end;

end.
