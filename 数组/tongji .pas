var
	a:array['a'..'z'] of integer;
	c,i:char;

begin
	read(c);
	while c<>'#' do
	begin
		if (ord(c)>=ord('a')) and (ord(c)<=ord('z')) then
			inc(a[c]);
		if (ord(c)>=ord('A')) and (ord(c)<=ord('Z')) then
			inc(a[chr(ord(c)+32)]);	
		read(c);
	
	end;
	
	for i:='a' to 'z' do
		writeln(a[i]);
end.
