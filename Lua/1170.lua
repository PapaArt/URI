N = tonumber(io.read())
for i=1,N do
  C = tonumber(io.read())
  Dias = 0
  while C > 1 do
      C = C/2
      Dias = Dias + 1
  end
  print(Dias .. " dias")
end
