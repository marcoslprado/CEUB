import networkx as nx
import matplotlib.pyplot as plt

# Criar um grafo vazio
G_pond = nx.Graph()

# Adicionar vértices (nós)
G_pond.add_nodes_from(["A", "B", "C", "D"])

# Adicionar arestas com peso
G_pond.add_edge("A", "B", weight=4)
G_pond.add_edge("B", "C", weight=2)
G_pond.add_edge("C", "A", weight=5)
G_pond.add_edge("C", "D", weight=1)
G_pond.add_edge("B", "E", weight=7)

# Pegar os pesos
edge_labels = nx.get_edge_attributes(G_pond, 'weight')

# Desenhar grafo
plt.figure(figsize=(6,4))
pos = nx.spring_layout(G_pond)
nx.draw(G_pond, pos, with_labels=True, node_color='lightyellow', node_size=1000, edge_color='gray', font_size=14)
nx.draw_networkx_edge_labels(G_pond, pos, edge_labels=edge_labels)
plt.title("Grafo Ponderado")
plt.show()
