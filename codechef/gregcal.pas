var
t,t1,year,i,givenYear,total,x,modres:longint;
s:array[0..6] of string;

function leap(year:integer):boolean;
begin
	if (year mod 4=0) and (year mod 100<>0) or (year mod 400=0) then
		exit(true)
	else
		exit(false);
end;

begin
	readln(t);
	givenYear:=2001;
	for t1:=1 to t do
	begin
		readln(year);
		//calculate days
		if year < givenYear then
		begin
			total:=0;
			for i:=year to givenYear-1 do
			begin
				if leap(i) then
					x:=366
				else
					x:=365;
				total:=total+x;
			end;
			modres:=total mod 7;
			s[0]:='monday';
			s[1]:='sunday';
			s[2]:='saturday';
			s[3]:='friday';
			s[4]:='thursday';
			s[5]:='wednesday';
			s[6]:='tuesday';
			writeln(s[modres]);
		end
		else
		begin
			total:=0;
			for i:=givenYear to year-1 do
			begin
				if leap(i) then
					x:=366
				else
					x:=365;
					
				total:=total+x;
			
			end;
			modres:=total mod 7;
			s[0]:='monday';
			s[1]:='tuesday';
			s[2]:='wednesday';
			s[3]:='thursday';
			s[4]:='friday';
			s[5]:='saturday';
			s[6]:='sunday';
			writeln(s[modres]);
		end;
	end;
end.
