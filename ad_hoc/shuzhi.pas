var
	source,target,total,temp,ince:longint;
	i:integer;
	len:integer;
	number,number1,number2:string;
	code:integer;

begin
       readln(number);
	
	i:=1;
	while(number[i]<>' ') do
	begin
		inc(i);
	end;
	
	number1:=copy(number,1,i);
	val(number1,source,code);

	delete(number,1,i);
	
	while(number[i]=' ') do
		delete(number,1,1);
		
	i:=1;
	while(number[i]<>' ') do
		inc(i);
	
	//numbertemp:=copy(number,1,i);
	
	delete(number,1,i);
	
	while(number[i]=' ') do
		delete(number,1,1);
		
	val(number,target,code);
	
	writeln('source:',source);
	writeln('target:',target);
	
	len:=length(number);
	
	temp:=0;
	total:=0;
	ince:=1;
	for i:=1 to len do
	begin
		temp:=ord(number[len-i+1]);
		case temp of
			48..57:temp:=temp-48;
			65..90:temp:=9+temp-65 +1;
			97..122:temp:=10+temp-97;
		end;
		total:=total + temp*ince;
		ince:=source*ince;
	end;
	
	writeln(total);
	
	
		


end.
