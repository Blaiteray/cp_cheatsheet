void dfs(vector<vector<int>> &e, vector<bool> &bm, int v) {
    bm[v] = true;
    //process vertex v
    for (int i: e[v]) {
        if (!bm[i]) DFS(e,bm,i);
    }
}