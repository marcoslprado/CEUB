import networkx as nx

# Achando menor caminho em Grafo não ponderado
G = nx.Graph()
G.add_edges_from([
    ("A", "B"),
    ("A", "C"),
    ("B", "D"),
    ("C", "D"),
    ("C", "E"),
    ("D", "E"),
    ("E", "F")
])

# Menor caminho entre A e F
caminho = nx.shortest_path(G, "A", "F")
distancia = nx.shortest_path_length(G, "A", "F")

print("Menor caminho entre A e F: ", caminho)
print("Distância: ", distancia)