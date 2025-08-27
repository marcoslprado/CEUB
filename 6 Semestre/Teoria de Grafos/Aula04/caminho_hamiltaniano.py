import networkx as nx
import matplotlib.pyplot as plt

# ---------- Função para buscar Caminho Hamiltoniano ----------
def encontrar_caminho_hamiltoniano(graph):
    def backtrack(caminho):
        if len(caminho) == len(graph):
            return caminho
        for vizinho in graph[caminho[-1]]:
            if vizinho not in caminho:
                resultado = backtrack(caminho + [vizinho])
                if resultado:
                    return resultado
        return None

    for inicio in graph:
        resultado = backtrack([inicio])
        if resultado:
            return resultado
    return None

# ---------- Grafo de entrada ----------
graph = {
    "A": ["B", "C"],
    "B": ["A", "C", "D"],
    "C": ["A", "B", "D"],
    "D": ["B", "C"]
}

# ---------- Encontrar caminho ----------
result = encontrar_caminho_hamiltoniano(graph)

# ---------- Criar grafo com networkx ----------
G = nx.Graph()
for node, neighbors in graph.items():
    for neighbor in neighbors:
        G.add_edge(node, neighbor)

pos = nx.spring_layout(G, seed=42)

# ---------- Plotar grafo ----------
plt.figure(figsize=(6,6))
nx.draw(G, pos, with_labels=True, node_size=800, node_color="lightblue", font_size=12, edge_color="gray")

# ---------- Se encontrou caminho, destacar ----------
if result:
    path_edges = list(zip(result, result[1:]))
    nx.draw_networkx_edges(G, pos, edgelist=path_edges, width=3, edge_color="red")
    nx.draw_networkx_nodes(G, pos, nodelist=result, node_size=900, node_color="orange")
    plt.title("✅ Caminho Hamiltoniano encontrado:\n" + " → ".join(result))
    print("✅ Caminho Hamiltoniano encontrado:", result)
else:
    plt.title("❌ Não existe Caminho Hamiltoniano no grafo.")
    print("❌ Não existe Caminho Hamiltoniano no grafo.")

plt.show()
