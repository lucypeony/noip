var
	t,i:longint;
	c:char;
begin 
	readln(t);
	for i:=1 to t do 
	begin 
		readln(c);
		case c of 
			'B','b': writeln('BattleShip');
			'C','c': writeln('Cruiser');
			'D','d': writeln('Destroyer');
			'F','f': writeln('Frigate');
		end;
	end;

end.