var
	n:integer;
	a,b,c:char;

procedure move(n:integer;a,b,c:char);
begin
	if n=0 then exit;
	move(n-1,a,c,b);
	writeln(n,a,'---->',b);
	move(n-1,c,b,a);
end;



begin
        n:=3;
	a:='a';
	b:='b';
	c:='c';
	move(n,a,b,c);


end.
