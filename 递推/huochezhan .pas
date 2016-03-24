var 
	k:real;
	a,n,m,x,i,j:longint;
	fa,fb,suma,sumb:array[1..20] of longint;
begin 
	readln(a,n,m,x);
	fa[1]:=1;fa[2]:=0;
	fb[1]:=0;fb[2]:=1;
	for i:=3 to n do begin 
		fa[i]:=fa[i-1]+fa[i-2];
		fb[i]:=fb[i-1]+fb[i-2];
	end;
	suma[1]:=a;sumb[1]:=0;
	for i:=2 to n do begin 
		suma[i]:=suma[i-1]+fa[i]*a;
		sumb[i]:=sumb[i-1]+fb[i];
	end;
	k:=(m-suma[n-3]-a)/sumb[n-3];
	if k-trunc(k)<le-6 then 
		writeln(suma[x-2]+sumb[x-2]*trunc(k)+a) else 
			writeln('No answer.');
end.