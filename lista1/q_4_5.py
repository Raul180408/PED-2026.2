def somaDigitos(n):
    soma = 0

    while n > 0:
        soma += n % 10
        n //= 10

    return soma


n = int(input("Digite um numero: "))

print("Soma dos digitos:", somaDigitos(n))