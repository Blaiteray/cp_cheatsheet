void bfs(vector<vector<int>> e,int n, int s)
{
    vector<bool> bm(n);
    for(int i=0;i<n;i++) bm[i]=false;
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(!q.empty())
    {
        s=q.top();
        //process vertex s
        q.pop();
        for (int i: e[s])
        {
            if (!bm[i]) {
                bm[i] = true;
                q.push(i);
            }
        }
    }
}