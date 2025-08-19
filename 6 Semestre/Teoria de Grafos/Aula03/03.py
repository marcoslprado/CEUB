import networkx as nx
import matplotlib.pyplot as plt

def plot_bfs(graph, start):
    G = nx.Graph(graph)
    pos = nx.spring_layout(G, seed=42)

    visited = []
    queue = [start]

    while queue:
        v = queue.pop(0)
        if v not in visited:
            visited.append(v)
            queue.extend([n for n in graph[v] if n not in visited])

    # Desenhar grafo
    plt.figure(figsize=(6,6))
    nx.draw(G, pos, with_labels=True, node_size=800, node_color="lightblue", font_size=12)

    # Destacar na ordem de visita
    for i in range(len(visited)-1):
        nx.draw_networkx_edges(G, pos, edgelist=[(visited[i], visited[i+1])], width=2, edge_color="red")
    nx.draw_networkx_nodes(G, pos, nodelist=visited, node_size=900, node_color="orange")

    plt.title(f"BFS a partir de {start}: ordem {visited}")
    plt.show()

    return visited


def hamiltonian_path(graph):
    n = len(graph)
    path = []

    def backtrack(current, visited):
        visited.add(current)
        path.append(current)

        if len(path) == n:
            return True

        for neighbor in graph[current]:
            if neighbor not in visited:
                if backtrack(neighbor, visited):
                    return True

        visited.remove(current)
        path.pop()
        return False

    for start_node in graph:
        path.clear()
        if backtrack(start_node, set()):
            return path

    return None


# Exemplo de grafo
graph = {
    0: [1, 2],
    1: [0, 2, 3],
    2: [0, 1, 3],
    3: [1, 2]
}

# Rodar BFS e plotar
visited_order = plot_bfs(graph, start=0)

# Encontrar caminho Hamiltoniano
result = hamiltonian_path(graph)

# Criar grafo com networkx para desenho
G = nx.Graph()
for node, neighbors in graph.items():
    for neighbor in neighbors:
        G.add_edge(node, neighbor)

pos = nx.spring_layout(G, seed=42)

# Plotar grafo base
plt.figure(figsize=(6,6))
nx.draw(G, pos, with_labels=True, node_size=800, node_color="lightblue", font_size=12, edge_color="gray")

# Se encontrou caminho, destacar arestas e nós do caminho Hamiltoniano
if result:
    path_edges = list(zip(result, result[1:]))
    nx.draw_networkx_edges(G, pos, edgelist=path_edges, width=3, edge_color="red")
    nx.draw_networkx_nodes(G, pos, nodelist=result, node_size=900, node_color="orange")
    print("Caminho Hamiltoniano encontrado:", result)
else:
    print("Não existe Caminho Hamiltoniano no grafo.")

plt.show()
