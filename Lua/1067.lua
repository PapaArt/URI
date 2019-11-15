X = tonumber(io.read())
if X%2 == 0 then
   for i=1,X,2 do
       print(i)
   end
else
   for i=1,X do
       if i%2 ~= 0 then
         print(i)
       end
   end
end
