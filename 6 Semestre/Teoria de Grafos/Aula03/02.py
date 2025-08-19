import networkx as nx
import matplotlib.pyplot as plt

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

# Encontrar caminho Hamiltoniano
result = hamiltonian_path(graph)
print(result)