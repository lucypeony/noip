var 
	n,m:longint;
	i,j,sum,num:longint;


begin 
	readln(n);
	for i:=1 to n do 
	begin 
		j:=5;
		sum:=0;
		num:=1;
		readln(m);
		while(num<>0) do 
		begin 
			num:= m div j;
			sum:=sum+num;
			j:=j*5;
		end;
		writeln(sum);
	end;

end.