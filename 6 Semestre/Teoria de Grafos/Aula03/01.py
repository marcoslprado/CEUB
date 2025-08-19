import networkx as nx
import matplotlib.pyplot as plt

# 1. Grafo Euleriano: ciclo com 6 vértices (todos grau = 2, conexo)
G_euler = nx.cycle_graph(6)

# 2. Grafo Hamiltoniano: ciclo com 7 vértices (ciclo Hamiltoniano óbvio)
G_hamilton = nx.cycle_graph(7)

# 3. Grafo geral (não necessariamente Euleriano ou Hamiltoniano)
G_random = nx.gnp_random_graph(7, 0.4, seed=42)

# Criar figura com subplots
fig, axs = plt.subplots(1, 3, figsize=(15,5))

# Desenhar Grafo Euleriano
nx.draw(G_euler, with_labels=True, ax=axs[0], node_color="lightblue", edge_color="black")
axs[0].set_title("Grafo Euleriano")

# Desenhar Grafo Hamiltoniano
nx.draw(G_hamilton, with_labels=True, ax=axs[1], node_color="lightgreen", edge_color="black")
axs[1].set_title("Grafo Hamiltoniano")

# Desenhar Grafo Aleatório
nx.draw(G_random, with_labels=True, ax=axs[2], node_color="lightcoral", edge_color="black")
axs[2].set_title("Grafo Aleatório")

plt.show()