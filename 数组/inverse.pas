
      //功能：
	             //将一个数组的内容逆序输出
var
	a:array[1..10] of integer;
        i:integer;
begin
	for i:=1 to 10 do
		a[i]:=i;
		
	for i:=10 downto 1 do
		write(a[i]:4);
end.
