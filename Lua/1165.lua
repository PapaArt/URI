N = tonumber(io.read())
cont = 0
for i=1,N do
  X = tonumber(io.read())
  if X == 0 or X == 1 then
    print(X .. "eh primo")
  else
    cont = 1
    root = math.sqrt(X)
    for j=2,root do
      if (X%j == 0) then
        cont = 0
        break
      end
    end
    if (cont == 1) then
      print(X .. " eh primo")
    else
      print(X .. " nao eh primo")
    end
  end
end
