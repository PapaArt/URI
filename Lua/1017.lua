Time = tonumber(io.read())
Speed = tonumber(io.read())
Fuel = (Time * Speed)/12
print(string.format("%.3f", Fuel))
