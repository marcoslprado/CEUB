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

  # Exemplo

graph = {
  "A": ["B", "C"],
  "B": ["A", "D", "E"],
  "C": ["A", "F"],
  "D": ["B"],
  "E": ["B", "F"],
  "F": ["C", "E"]
}

plot_bfs(graph, "A")