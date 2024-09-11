'''
2) Verificar letra 'a' em string by Lorena Oliveira
Estagio Target

'''

def verificar_letra_a(string):
    count_a = string.lower().count('a')

    if count_a > 0:
        return f"A letra 'a' aparece {count_a} vez(es) na string"
    else:
        return "A letra 'a' não aparece na string!"
        

entrada = input("Informe uma string: ")
resultado = verificar_letra_a(entrada)
print(resultado)
        