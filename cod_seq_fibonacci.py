def fibonacci_sequence(limit):
    fib_sequence = [0, 1]
    while fib_sequence[-1] < limit:
        next_value = fib_sequence[-1] + fib_sequence[-2]
        fib_sequence.append(next_value)
    return fib_sequence

def check_fibonacci(number):
    fib_sequence = fibonacci_sequence(number)
    if number in fib_sequence:
        return f"O número {number} pertence à sequência de Fibonacci."
    else:
        return f"O número {number} não pertence à sequência de Fibonacci."

# Exemplo de uso
numero = int(input("Informe um número: "))
resultado = check_fibonacci(numero)
print(resultado)