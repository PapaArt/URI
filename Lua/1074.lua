N = tonumber(io.read())
for i=1,N do
  X = tonumber(io.read())
  if X%2 == 0 and X < 0 then
     print("EVEN NEGATIVE")
  elseif X%2 == 0 and X > 0 then
     print("EVEN POSITIVE")
  elseif X%2 ~= 0 and X > 0 then
     print("ODD POSITIVE")
  elseif X%2 ~= 0 and X < 0 then
     print("ODD NEGATIVE")
  else
     print("NULL")
  end
end
