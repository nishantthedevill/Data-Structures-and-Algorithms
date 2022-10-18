class Solution {
    public List<List<Integer>> criticalConnections(int n, List<List<Integer>> connections) {
        List<Integer>[] adjList = new ArrayList[n];
        for (List<Integer> connection : connections) {
            if (adjList[connection.get(0)] == null) adjList[connection.get(0)] = new ArrayList<>();
            if (adjList[connection.get(1)] == null) adjList[connection.get(1)] = new ArrayList<>();
            adjList[connection.get(0)].add(connection.get(1));
            adjList[connection.get(1)].add(connection.get(0));
        }
        ArrayList<List<Integer>> result = new ArrayList<>();
        dfs(0, -1, 1, adjList, new int[n], result);
        return result;
    }

    private int dfs(int node, int parent, int arrivalTime, List<Integer>[] adjList, int[] visited, List<List<Integer>> result) {
        if (visited[node] != 0) return visited[node];
        visited[node] = arrivalTime;

        int minArrivalTime = arrivalTime;
        for (int neighbour : adjList[node]) {
            if (neighbour != parent)
                minArrivalTime = Math.min(minArrivalTime, dfs(neighbour, node, arrivalTime + 1, adjList, visited, result));
        }
        if (parent != -1 && arrivalTime == minArrivalTime) result.add(List.of(parent, node));
        return minArrivalTime;
    }
}