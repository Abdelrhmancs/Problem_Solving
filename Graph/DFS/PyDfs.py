def dfs(graph , start):
    stack = [start]
    vis = set([start])
    while stack:
        node = stack.pop()
        print(node , end=' ')
        for v in graph[node]:
            if v not in vis:
                stack.append(v)
                vis.add(v)

vis = []
def recDfs(graph, start):
    vis.append(start)
    print(start , end=' ')
    for v in graph[start]:
        if v not in vis:
            recDfs(graph,v)

#example 
graph = { 
    'A': ['B', 'C'],   
    'B': ['D', 'E'],   
    'C': ['F'],        
    'D': [],          
    'E': ['F'],       
    'F': []           
}
recDfs(graph , 'A')
                
