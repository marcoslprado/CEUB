import networkx as nx
import matplotlib.pyplot as plt

# Criando um grafo não direcionado
G = nx.Graph()

# Adicionando vértices
G.add_nodes_from(["A", "B", "C", "D", "E", "F", "G"])

# Adicionando arestas
G.add_edges_from([
    ("A", "B"),
    ("A", "C"),
    ("A", "F"),
    ("B", "D"),
    ("C", "D"),
    ("C", "G"),
    ("C", "E"),
    ("D", "E")
])

# Desenhando
nx.draw(G, with_labels=True, node_size=800, node_color="lightblue", font_size=10)
plt.show()