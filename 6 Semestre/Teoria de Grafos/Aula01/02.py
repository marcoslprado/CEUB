import networkx as nx
import matplotlib.pyplot as plt

# Criar um grafo direcionado vazio
DG = nx.DiGraph()

# Adicionar vértices (nós)
DG.add_nodes_from(["A", "B", "C", "D"])

# Adicionar arestas direcionadas (conexões)
DG.add_edges_from([("A", "B"), ("B", "C"), ("C", "A"), ("C", "D")])

# Desenhar grafo
plt.figure(figsize=(6,4))
nx.draw(DG, with_labels=True, node_color='lightblue', node_size=1000, edge_color='gray', font_size=14)
plt.title("Grafo Direcionado")
plt.show()
