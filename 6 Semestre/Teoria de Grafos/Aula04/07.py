import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()
G.add_weighted_edges_from([
    ("Casa", "Escola", 5),
    ("Casa", "Mercado", 9),
    ("Escola", "Parque", 4),
    ("Mercado", "Parque", 2),
    ("Escola", "Mercado", 7)
])

print(nx.shortest_path(G, "Casa", "Mercado", weight="weight"))
print(nx.shortest_path_length(G, "Casa", "Mercado", weight="weight"))

# Supondo que G já existe e tem pesos nas arestas no atributo 'weight'

pos = nx.spring_layout(G)  # Posicionamento dos nós

nx.draw(G, pos, with_labels=True, node_color="lightblue", font_size=10)

# Pega os pesos para usar como rótulos nas arestas
edge_labels = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels)

plt.title("Grafo das distâncias")
plt.show()
