from collections import deque 
def BFS(graph , start):
    dq = deque([start])
    vis = set([start])

    while dq: 
        node = dq.popleft()
        print(node , end=' ')
        for v in graph[node]:
            if v not in vis:
                dq.append(v)
                vis.add(v)


#example 
graph = { 
    'A': ['B', 'C'],   
    'B': ['D', 'E'],   
    'C': ['F'],        
    'D': [],          
    'E': ['F'],       
    'F': []           
} 

BFS(graph , 'A')
