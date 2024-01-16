def main():
    archivos = ["cien_mil.txt", "cien_millones.txt", "diez_mil.txt", "diez_millones.txt", "mil.txt", "millon.txt"]

    for archivo in archivos:
        with open(archivo, 'r') as file:
            lines = file.readlines()

        # Inicializar listas para almacenar valores secuenciales y binarios
        secuenciales = []
        binarios = []

        for line in lines:
            values = line.strip().split(';')
            secuencial_str = [value for value in values if 'secuencial' in value][0].split(':')[1].strip()
            binario_str = [value for value in values if 'binaria' in value][0].split(':')[1].strip()
            secuenciales.append(int(secuencial_str))
            binarios.append(int(binario_str))

        # Calcular máximo, mínimo y promedio de secuenciales
        max_secuencial = max(secuenciales)
        min_secuencial = min(secuenciales)
        promedio_secuencial = sum(secuenciales) / len(secuenciales)

        # Calcular máximo, mínimo y promedio de binarios
        max_binario = max(binarios)
        min_binario = min(binarios)
        promedio_binario = sum(binarios) / len(binarios)

        # Imprimir resultados
        print(archivo)
        print("Secuencial: Máximo =", max_secuencial, "Mínimo =", min_secuencial, "Promedio =", promedio_secuencial)
        print("Binario: Máximo =", max_binario, "Mínimo =", min_binario, "Promedio =", promedio_binario)

main()