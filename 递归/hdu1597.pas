var
	k,k2,x,y,t:int64;
        k1:longint;
	sumy,sumx,n:int64;

begin
	readln(k);
	for k1:=1 to k do
	begin
	
		readln(n);
		y:=trunc(sqrt(2*n));
		sumy:=(1+y)*y div 2 ;
		//writeln('sumy:',sumy,'  ','y:',y);
		if sumy <n then
			x:=y+1
		else
			x:=y;
		
		sumx:=(1+x)*x div 2 ;
		
		if sumx >=n then
		begin
			t:= n - (sumx -x +1)+1 ;
			t:=t mod 9;
			if t =0 then
				t:=9;

		end
		else
		begin
			t:=n -sumx+1;
			t:=t mod 9;
			if t=0 then
				t:=9;
		end;
			
		

		writeln(t);


	end;
	

end.
