const maxn=100001;
type
   arrayT = array[1..maxn] of longint;

var a  : arrayT;
   i,n : longint;

procedure swap(var a,b : longint);
var
   t : longint;
begin
   t:=b;
   b:=a;
   a:=t;
end; { swap }

function choosePivot(var a : arrayT;lo,hi:longint):longint;
begin
   choosePivot := (lo + hi) div 2 ;
end;

function partition(var a : arrayT;lo,hi:longint):longint;
var
   pivotIndex,pivotValue,storeIndex : longint;
begin
   pivotIndex:=choosePivot(a,lo,hi);
   pivotValue:=a[pivotIndex];
   swap(a[pivotIndex],a[hi]);
   storeIndex:=lo;
   for i:=lo to hi-1 do
      if a[i]<pivotValue then
	 begin
	 swap(a[i],a[storeIndex]);
	    storeIndex:=storeIndex + 1;
	 end;
	 swap(a[storeIndex],a[hi]);
   partition:=storeIndex;
end; { partition }


procedure quicksort(var a : arrayT;lo,hi : longint);
var
   p : longint;
begin 
   if lo < hi then
   begin
      p:=partition(a,lo,hi);
      quicksort(a,lo,p-1);
      quicksort(a,p+1,hi);
   end;
   

end; { quicksort }


begin
   readln(n);
   for i:=1 to n do
      readln(a[i]);

   quicksort(a,1,n);

   for i:=1 to n do
      writeln(a[i]);


end.