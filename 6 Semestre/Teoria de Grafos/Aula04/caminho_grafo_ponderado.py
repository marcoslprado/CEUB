import networkx as nx

# Achando menor caminho em Grafo ponderado
G = nx.Graph()
G.add_weighted_edges_from([
    ("A", "B", 2),
    ("A", "C", 1),
    ("B", "D", 3),
    ("C", "D", 1),
    ("C", "E", 4),
    ("D", "E", 2),
    ("E", "F", 1)
])

# Menor caminho entre A e F considerando pesos
caminho = nx.shortest_path(G, "A", "F", weight="weight")
distancia = nx.shortest_path_length(G, "A", "F", weight="weight")

print("Menor caminho entre A e F: ", caminho)
print("Custo total: ", distancia)