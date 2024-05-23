import matplotlib.pyplot as plt
import networkx as nx

def dfs(grafo, no_atual, caminho_atual, visitados, todos_caminhos, todos_custos):
    visitados.add(no_atual)
    caminho_atual.append(no_atual)

    if len(visitados) == len(grafo):
        custo_caminho = 0
        for i in range(len(caminho_atual) - 1):
            custo_caminho += grafo[caminho_atual[i]][caminho_atual[i+1]]
        custo_caminho += grafo[caminho_atual[-1]][caminho_atual[0]]
        todos_caminhos.append(caminho_atual.copy())
        todos_custos.append(custo_caminho)
    else:
        for vizinho in grafo[no_atual]:
            if vizinho not in visitados:
                dfs(grafo, vizinho, caminho_atual, visitados, todos_caminhos, todos_custos)

    visitados.remove(no_atual)
    caminho_atual.pop()

grafo = {
    'A': {'B': 10, 'C': 15, 'D': 20},
    'B': {'A': 10, 'C': 5, 'D': 12},
    'C': {'A': 15, 'B': 5, 'D': 8},
    'D': {'A': 7, 'B': 12, 'C': 8}
}

no_inicial = 'A'
visitados = set()
todos_caminhos = []
todos_custos = []
caminho_atual = []

dfs(grafo, no_inicial, caminho_atual, visitados, todos_caminhos, todos_custos)

print("Todos os caminhos encontrados:")
for i in range(len(todos_caminhos)):
    print("Caminho:", " -> ".join(todos_caminhos[i]), "Custo:", todos_custos[i])

melhor_caminho_idx = todos_custos.index(min(todos_custos))
melhor_caminho = todos_caminhos[melhor_caminho_idx]
custo_melhor_caminho = todos_custos[melhor_caminho_idx]

G = nx.DiGraph()

for no, vizinhos in grafo.items():
    for vizinho, peso in vizinhos.items():
        G.add_edge(no, vizinho, weight=peso)

pos = nx.spring_layout(G)

plt.figure(figsize=(10, 5))
plt.subplot(1, 2, 1)
nx.draw(G, pos, with_labels=True, node_size=700, node_color='skyblue', font_size=12, font_weight='bold', edge_color='gray')
labels = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_edge_labels(G, pos, edge_labels=labels)
plt.title('Grafo')

melhor_caminho_edges = [(melhor_caminho[i], melhor_caminho[i+1]) for i in range(len(melhor_caminho)-1)]
G_cam = nx.DiGraph()
G_cam.add_edges_from(melhor_caminho_edges)
pos_cam = nx.spring_layout(G_cam)
plt.subplot(1, 2, 2)
nx.draw(G_cam, pos_cam, with_labels=True, node_size=700, node_color='skyblue', font_size=12, font_weight='bold', edge_color='red', width=2)
plt.title('Melhor Caminho')

plt.text(0.0, 0.0, f'Melhor caminho: {" -> ".join(melhor_caminho)}', transform=plt.gca().transAxes, fontsize=12)
plt.text(0.0, -0.12, f'Custo total: {custo_melhor_caminho}', transform=plt.gca().transAxes, fontsize=12)

plt.show()