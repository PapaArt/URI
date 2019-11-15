N = tonumber(io.read())
Notas = N
N100 = math.floor(N/100)
N = N - N100 * 100
N50 = math.floor(N/50)
N = N - N50 * 50
N20 = math.floor(N/20)
N = N - N20 * 20
N10 = math.floor(N/10)
N = N - N10 * 10
N5 = math.floor(N/5)
N = N - N5 * 5
N2 = math.floor(N/2)
N = N - N2 * 2
print(Notas)
print(N100 .. " nota(s) de R$ 100,00")
print(N50 .. " nota(s) de R$ 50,00")
print(N20 .. " nota(s) de R$ 20,00")
print(N10 .. " nota(s) de R$ 10,00")
print(N5 .. " nota(s) de R$ 5,00")
print(N2 .. " nota(s) de R$ 2,00")
print(N .. " nota(s) de R$ 1,00")
