# Representação de grafo como lista de adjacência
grafo = {
    "A": ["B", "C"],
    "B": ["A", "D"],
    "C": ["A", "D", "E"],
    "D": ["B", "C", "E"],
    "E": ["C","D"]

}

print("Vértices do grafo:", list(grafo.keys()))
print("Arestas do grafo:")
for vertice in grafo:
  for vizinho in grafo[vertice]:
    print(f"{vertice} -- {vizinho}")
