Name = io.read()
Salary = tonumber(io.read())
Sell = tonumber(io.read())
Total = Salary + (Sell * 0.15)
print("TOTAL = R$ " .. string.format("%.2f",Total))
