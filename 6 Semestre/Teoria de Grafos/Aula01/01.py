import networkx as nx
import matplotlib.pyplot as plt

# Criar um grafo vazio
G = nx.Graph()

# Adicionar vértices (nós)
G.add_nodes_from(["A", "B", "C", "D"])

# Adicionar arestas (conexões)
G.add_edges_from([("A", "B"), ("A", "C"), ("B", "D"), ("C", "D")])

# Desenhar grafo
plt.figure(figsize=(6,4))
nx.draw(G, with_labels=True, node_color='lightblue', node_size=1000, edge_color='gray', font_size=14)
plt.title("Grafo não direcionado")
plt.show()